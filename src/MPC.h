#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;

class MPC {
 public:
  MPC();

  virtual ~MPC();

  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);

  vector<double> traj_x;
  vector<double> traj_y;
};

#endif /* MPC_H */
