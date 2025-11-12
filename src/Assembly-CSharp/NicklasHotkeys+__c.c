
/* Boolean <.cctor>b__3_0(KeyCode) */

bool Assembly-CSharp.dll::NicklasHotkeys+<>c::NicklasHotkeys_c___cctor_b__3_0
               (NicklasHotkeys_c *this,KeyCode__Enum _,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,CONCAT44(in_register_00000014,_));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NicklasHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Test_Modal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStackX_20 = 1;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_20);
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,
               (Object *)StringLiteral_Test_Modal,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    _uStackX_20 = CONCAT31(uStackX_21,2);
    pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_20);
    uStackX_20 = 0xe;
    uStackX_21 = 0;
    value = (Object *)FUN_?(TypeInfo__NotificationLifetime,&uStackX_20);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (*(int *)&(TypeInfo__NicklasHotkeys->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* NicklasHotkeys+<>c() */

void Assembly-CSharp.dll::NicklasHotkeys+<>c::NicklasHotkeys_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NicklasHotkeys____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (NicklasHotkeys_c *)FUN_?(TypeInfo__NicklasHotkeys____c);
  TypeInfo__NicklasHotkeys____c->static_fields->__9 = pNVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__NicklasHotkeys____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

