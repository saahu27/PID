/**
 * @file TDD.hpp
 * @author Divyansh Agrawal (dagrawa1@umd.edu) Sahruday Patti (sahruday@umd.edu)
 * @brief header file
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once

#include <iostream>

/** @namespace controller TDD.hpp
 *  "include/../include/TDD.hpp"
 *  @brief Utility functions for PID
 */

namespace controller {
   /**
    * @brief class PID contains utility functions for developing a PID controller
    */
class PID{
 public:

    /**
     * @brief Getter for private variable errorPrevious_
     * @return errorPrevious_
     */

    double GetterErrorPrevious();

    /**
     * @brief Setter for private variable errorPrevious_
     * @param error the present error at the end of loop is set as previous error
     */

    void SetterErrorPrevious(double Error);

    /**
     * @brief method to compute to reach the setpoint
     * @param targetVel the velocity to which we need to converge
     * @param currentVel the current velocity from which it should reach the setpoint value
     * @return targetVel within the tolerance
     */
    double ComputeVel(double targetVel, double currentVel);

    /**
     * @brief method to compute to reach the setpoint
     * @return returns the time step set
     */
    double returndt();
   

 private:
    /**
     * @brief integral constant chosen
     * @param ki_ private variable chosen
     */
    const double ki_ = 0.1; 

    /**
     * @brief proportional constant chosen
     * @param kp_ private variable chosen and set
     */
    const double kp_ = 0.01;  //

    /**
     * @brief derivative constant chosen
     * @param kd_ private variable chosen and set
     */
    const double kd_ = 0.001;  

    /**
     * @brief timestep chosen
     * @param dt_ private variable chosen
     */
    const double dt_ = 1;  
    /**
     * @brief variable to update the previous error
     * @param errorPrevious_
     */
    double errorPrevious_;  
    /**
     * @brief tolerance level chosen
     * @param tolerance_ private variable chosen and set
     */
    const double tolerance_ = 0.1;  //
    
  };
}  // namespace controller