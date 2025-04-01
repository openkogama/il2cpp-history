
/* Boolean IsSurfaceMesh() */

bool Assembly-CSharp.dll::RTG::ObjectSurfaceSnap+SnapConfig::
     ObjectSurfaceSnap_SnapConfig_IsSurfaceMesh
               (ObjectSurfaceSnap_SnapConfig *this,MethodInfo *method)

{
  iVar1 = this->SurfaceType;
  if ((iVar1 != 1) && (iVar1 != 3)) {
    return iVar1 == 2;
  }
  return 1;
}

