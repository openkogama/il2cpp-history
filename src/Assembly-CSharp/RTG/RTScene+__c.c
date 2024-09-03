
/* Boolean <GetHoveredUIElements>b__15_0(RaycastResult) */

bool Assembly-CSharp.dll::RTG::RTScene+<>c::RTScene_c__GetHoveredUIElements_b__15_0
               (RTScene_c *this,RaycastResult item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (item.m_GameObject != (GameObject *)0x0) {
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (item.m_GameObject,
                   UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                  );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* RTScene+<>c() */

void Assembly-CSharp.dll::RTG::RTScene+<>c::RTScene_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTScene____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTScene____c;
  value = (RTScene_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__RTG__RTScene____c->static_fields->__9 = value;
  func_?(TypeInfo__RTG__RTScene____c->static_fields,value);
  return;
}

