
/* IModelingConstraint <SetConstraints>b__0() */

IModelingConstraint *
Assembly-CSharp.dll::EditableCubeModelWrapper+<>c__DisplayClass7_0::
EditableCubeModelWrapper_c_DisplayClass7_0__SetConstraints_b__0
          (EditableCubeModelWrapper_c_DisplayClass7_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ModelingBoxCountConstraint);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).__4__this;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
    cubeModel = (pEVar1->fields).cubeModelBase;
    maxCorner = (this->fields).max;
    minCorner = (this->fields).min;
    minCubeCount = (this->fields).minCubeCount;
    this_00 = (ModelingBoxCountConstraint *)func_?(TypeInfo__ModelingBoxCountConstraint);
    ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
              (this_00,(MVCubeModelBase *)cubeModel,minCorner,maxCorner,minCubeCount,
               (MethodInfo *)0x0);
    return (IModelingConstraint *)this_00;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IModelingConstraint *)(*pcVar2)();
  return pIVar3;
}

