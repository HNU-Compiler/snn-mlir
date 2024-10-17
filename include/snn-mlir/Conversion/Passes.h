#ifndef SNN_MLIR_PASSES_H
#define SNN_MLIR_PASSES_H

#include <memory>
#include "mlir/Pass/Pass.h"

#include "snn-mlir/InitAllDialects.h"
#include "snn-mlir/Conversion/SNNToStd/SNNPasses.h"
#include "snn-mlir/Conversion/SNNToLinalgOps/SNNToLinalgOpspasses.h"
#include "snn-mlir/Conversion/unrollcopy/unrollcopypasses.h"

namespace snn {

inline void registerPasses() {
  snn::createSNNToStdPass();     
  snn::createSNNToLinalgOpsPass();
  snn::createMemrefCopyToLoopUnrollPass();
}

}

#endif // SNN_MLIR_PASSES_H