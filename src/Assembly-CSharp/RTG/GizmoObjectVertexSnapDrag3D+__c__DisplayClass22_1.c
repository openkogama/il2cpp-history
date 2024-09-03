
/* Boolean <GatherDestinationObjects>b__1(GameObject) */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D+<>c__DisplayClass22_1::
     GizmoObjectVertexSnapDrag3D_c_DisplayClass22_1__GatherDestinationObjects_b__1
               (GizmoObjectVertexSnapDrag3D_c_DisplayClass22_1 *this,GameObject *b,
               MethodInfo *method)

{
  this_00 = (this->fields).a;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (b != (GameObject *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (b,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_IsChildOf
                          (this_01,parent,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}

