
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::RareRewardNotification::RareRewardNotification_Initialize
               (RareRewardNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__Common__RewardRarity);
    func_?(&TypeInfo__MV__Common__RewardType);
    func_?(&StringLiteral__0__won__1__2__from_spins_);
    cRam_? = '\x01';
  }
  this_02 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0xb,data._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if ((this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index == 0)) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
      (TypeInfo__MV__Common__RewardRarity->_0).element_class) goto code_?;
  pcVar3 = (char *)func_?();
  cVar4 = *pcVar3;
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
  this_00 = (pMVar5->fields).playerContainer;
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if ((this_00 == (MVPlayerContainer *)0x0) || (TVar2.m_Index == 0)) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) != (TypeInfo__System__Int32->_0).element_class
     ) {
code_?:
    func_?();
    goto code_?;
  }
  piVar6 = (int32_t *)func_?();
  pMVar7 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar6,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (TVar2.m_Index == 0) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
      (TypeInfo__MV__Common__RewardType->_0).element_class) goto code_?;
  piVar8 = (int *)func_?();
  iVar9 = *piVar8;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&StringLiteral__test);
    func_?(&StringLiteral__gold);
    cRam_? = '\x01';
  }
  pSVar10 = StringLiteral__xp;
  if (iVar9 == 1) {
code_?:
    pSVar10 = TM::TM__(pSVar10,(MethodInfo *)0x0);
  }
  else {
    pSVar10 = StringLiteral__test;
    if (iVar9 != 2) {
      pSVar10 = StringLiteral__gold;
      if (iVar9 != 3) {
        pSVar10 = StringLiteral_ERROR;
      }
      goto code_?;
    }
  }
  pOVar1 = (Object *)func_?();
  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (TVar2.m_Index == 0) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) != (TypeInfo__System__Int32->_0).element_class
     ) goto code_?;
  func_?();
  method_00 = (this->fields).text;
  TM::TM__(StringLiteral__0__won__1__2__from_spins_,(MethodInfo *)method_00);
  if ((pMVar7 == (MVPlayer *)0x0) ||
     (pUVar11 = (pMVar7->fields)._UserProfileData_k__BackingField, pUVar11 == (UserProfileData *)0x0))
  goto code_?;
  arg0 = (pUVar11->fields).UserName;
  format = (String *)&UNK_?;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::String::String_Format_2
            (format,(Object *)arg0,pOVar1,(Object *)pSVar10,(MethodInfo *)0x0);
  if (method_00 == (Text *)0x0) goto code_?;
  (*(code *)(method_00->klass->vtable).set_text.method)(method_00);
  if (cVar4 == '\x03') {
    pGVar12 = (this->fields).EpicPanel;
    if ((pGVar12 == (GameObject *)0x0) ||
       (pGVar12 = (GameObject *)
                  UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)pGVar12,(MethodInfo *)0x0),
       pGVar12 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar12,1,(MethodInfo *)0x0);
    pGVar12 = (this->fields).LegendaryPanel;
code_?:
    if ((pGVar12 == (GameObject *)0x0) ||
       (pGVar12 = (GameObject *)
                  UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)pGVar12,(MethodInfo *)0x0),
       pGVar12 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar12,0,(MethodInfo *)0x0);
  }
  else if (cVar4 == '\x04') {
    pGVar12 = (this->fields).LegendaryPanel;
    if ((pGVar12 == (GameObject *)0x0) ||
       (pGVar12 = (GameObject *)
                  UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)pGVar12,(MethodInfo *)0x0),
       pGVar12 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar12,1,(MethodInfo *)0x0);
    pGVar12 = (this->fields).EpicPanel;
    goto code_?;
  }
  this_01 = (this->fields).tertiaryNotificationUI;
  in_stack_13 = (this->klass->vtable).Initialize.methodPtr;
  method = (MethodInfo *)this;
  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
  l = (*(code *)(this->klass->vtable).get_Lifetime.method)();
  if (this_01 != (TertiaryNotificationUI *)0x0) {
    TertiaryNotificationUI::TertiaryNotificationUI_Initialize
              (this_01,(Notification *)this,l,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* String TypeToText(RewardType) */

String * Assembly-CSharp.dll::RareRewardNotification::RareRewardNotification_TypeToText
                   (RareRewardNotification *this,RewardType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__xp);
    func_?(&StringLiteral_ERROR);
    func_?(&StringLiteral__test);
    func_?(&StringLiteral__gold);
    cRam_? = '\x01';
  }
  if (type == RewardType__Enum_XPReward) {
    pSVar1 = TM::TM__(StringLiteral__xp,(MethodInfo *)0x0);
    return pSVar1;
  }
  if (type == RewardType__Enum_TestReward) {
    return StringLiteral__test;
  }
  if (type != RewardType__Enum_GoldReward) {
    pSVar1 = TM::TM__(StringLiteral_ERROR,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = TM::TM__(StringLiteral__gold,(MethodInfo *)0x0);
  return pSVar1;
}

