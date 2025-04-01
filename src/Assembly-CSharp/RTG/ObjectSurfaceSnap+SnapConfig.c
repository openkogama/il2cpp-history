
/* Boolean IsSurfaceMesh() */

bool Assembly-CSharp.dll::RTG::ObjectSurfaceSnap+SnapConfig::
     ObjectSurfaceSnap_SnapConfig_IsSurfaceMesh
               (ObjectSurfaceSnap_SnapConfig *this,MethodInfo *method)

{
  if ((this->SurfaceType != 1) && (this->SurfaceType != 3)) {
    return this->SurfaceType == 2;
  }
  return 1;
}

