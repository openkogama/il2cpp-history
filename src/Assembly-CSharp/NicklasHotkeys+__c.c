
/* Boolean <.cctor>b__3_0(KeyCode) */

bool Assembly-CSharp.dll::NicklasHotkeys+<>c::NicklasHotkeys_c___cctor_b__3_0
               (NicklasHotkeys_c *this,KeyCode__Enum _,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NicklasHotkeys);
    func_?(&TypeInfo__NotificationLifetime);
    func_?(&StringLiteral_Test_Modal);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = 1;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar2,
               (Object *)StringLiteral_Test_Modal,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_3 = 2;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_3);
    value = (Object *)func_?(TypeInfo__NotificationLifetime,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar2,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__NicklasHotkeys->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
    if (this_00 != (NotificationsManager *)0x0) {
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this_00,NotificationType__Enum_ModalNotification,
                 (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* NicklasHotkeys+<>c() */

void Assembly-CSharp.dll::NicklasHotkeys+<>c::NicklasHotkeys_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NicklasHotkeys____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__NicklasHotkeys____c;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__NicklasHotkeys____c->static_fields->__9 = (NicklasHotkeys_c *)value;
  func_?(TypeInfo__NicklasHotkeys____c->static_fields,value);
  return;
}

