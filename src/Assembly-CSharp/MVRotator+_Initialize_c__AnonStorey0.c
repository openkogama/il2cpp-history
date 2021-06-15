
/* IModelingConstraint <>m__0() */

IModelingConstraint *
Assembly-CSharp.dll::MVRotator+<Initialize>c__AnonStorey0::MVRotator_Initialize_c_AnonStorey0___m__0
          (MVRotator_Initialize_c_AnonStorey0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._this;
  if (this_00 != (MVRotator *)0x0) {
    cubeModel = (MVCubeModelBase *)
                WindTurbine::WindTurbine_get_InputSignalReceiver
                          ((WindTurbine *)this_00,(MethodInfo *)0x0);
    minCorner = (this->fields).min;
    maxCorner = (this->fields).max;
    this_01 = (ModelingBoxCountConstraint *)
              func_?((short)TypeInfo__ModelingBoxCountConstraint);
    ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
              (this_01,cubeModel,minCorner,maxCorner,1,(MethodInfo *)0x0);
    return (IModelingConstraint *)this_01;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IModelingConstraint *)(*pcVar1)();
  return pIVar2;
}

