
/* Boolean <GetQuadrantFromAxesSigns>b__0(PlaneIdHelper+PlaneQuadrantInfo) */

bool Assembly-CSharp.dll::RTG::PlaneIdHelper+<>c__DisplayClass11_0::
     PlaneIdHelper_c_DisplayClass11_0__GetQuadrantFromAxesSigns_b__0
               (PlaneIdHelper_c_DisplayClass11_0 *this,PlaneIdHelper_PlaneQuadrantInfo item,
               MethodInfo *method)

{
  if (item.FirstAxisSign != (this->fields).firstAxisSign) {
    return 0;
  }
  return item.SecondAxisSign == (this->fields).secondAxisSign;
}

