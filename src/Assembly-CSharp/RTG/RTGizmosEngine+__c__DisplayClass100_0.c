
/* Boolean <IsSceneGizmoCamera>b__0(RTSceneGizmoCamera) */

bool Assembly-CSharp.dll::RTG::RTGizmosEngine+<>c__DisplayClass100_0::
     RTGizmosEngine_c_DisplayClass100_0__IsSceneGizmoCamera_b__0
               (RTGizmosEngine_c_DisplayClass100_0 *this,RTSceneGizmoCamera *item,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (item != (RTSceneGizmoCamera *)0x0) {
    x = (item->fields)._camera;
    y = (this->fields).camera;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}

