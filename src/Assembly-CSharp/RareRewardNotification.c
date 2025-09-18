
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
  n = this;
  this = (RareRewardNotification *)CONCAT13(0xb,this._0_3_);
  (n->fields)._.timeSinceStart = 0.0;
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_02 = data;
  if ((data == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index == 0)) goto code_?;
  pIVar3 = (Int32__Class *)TypeInfo__MV__Common__RewardRarity;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
      (TypeInfo__MV__Common__RewardRarity->_0).element_class) goto code_?;
  puVar4 = (undefined1 *)func_?(TVar2.m_Index);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(*puVar4,data._0_3_);
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
  this_00 = (pMVar5->fields).playerContainer;
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if ((this_00 == (MVPlayerContainer *)0x0) || (TVar2.m_Index == 0)) goto code_?;
  pIVar3 = TypeInfo__System__Int32;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) != (TypeInfo__System__Int32->_0).element_class
     ) {
code_?:
    func_?(TVar2.m_Index,pIVar3);
    goto code_?;
  }
  piVar6 = (int32_t *)func_?(TVar2.m_Index);
  pMVar7 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar6,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (TVar2.m_Index == 0) goto code_?;
  pIVar3 = (Int32__Class *)TypeInfo__MV__Common__RewardType;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
      (TypeInfo__MV__Common__RewardType->_0).element_class) goto code_?;
  piVar8 = (int *)func_?(TVar2.m_Index);
  iVar9 = *piVar8;
  if (cRam_? == '\0') {
    func_?(&StringLiteral__xp);
    func_?(&StringLiteral_ERROR);
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
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (TVar2.m_Index == 0) goto code_?;
  pIVar3 = TypeInfo__System__Int32;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) != (TypeInfo__System__Int32->_0).element_class
     ) goto code_?;
  func_?(TVar2.m_Index);
  format = TM::TM__(StringLiteral__0__won__1__2__from_spins_,(MethodInfo *)0x0);
  if ((pMVar7 == (MVPlayer *)0x0) ||
     (pUVar11 = (pMVar7->fields)._UserProfileData_k__BackingField, pUVar11 == (UserProfileData *)0x0))
  goto code_?;
  arg0 = (pUVar11->fields).UserName;
  piVar8 = (int *)&stack0xffffffec;
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32);
  pSVar10 = mscorlib.dll::System::String::String_Format_2
                      (format,(Object *)arg0,pOVar1,(Object *)pSVar10,(MethodInfo *)0x0);
  if (piVar8 == (int *)0x0) goto code_?;
  (**(code **)(*piVar8 + 0x318))(piVar8,pSVar10,*(undefined4 *)(*piVar8 + 0x31c));
  if (data._3_1_ == '\x03') {
    pGVar12 = (n->fields).EpicPanel;
    if ((pGVar12 == (GameObject *)0x0) ||
       (pGVar12 = (GameObject *)
                  UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)pGVar12,(MethodInfo *)0x0),
       pGVar12 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar12,1,(MethodInfo *)0x0);
    pGVar12 = (n->fields).LegendaryPanel;
code_?:
    if ((pGVar12 == (GameObject *)0x0) ||
       (pGVar12 = (GameObject *)
                  UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)pGVar12,(MethodInfo *)0x0),
       pGVar12 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar12,0,(MethodInfo *)0x0);
  }
  else if (data._3_1_ == '\x04') {
    pGVar12 = (n->fields).LegendaryPanel;
    if ((pGVar12 == (GameObject *)0x0) ||
       (pGVar12 = (GameObject *)
                  UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)pGVar12,(MethodInfo *)0x0),
       pGVar12 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar12,1,(MethodInfo *)0x0);
    pGVar12 = (n->fields).EpicPanel;
    goto code_?;
  }
  this_01 = (n->fields).tertiaryNotificationUI;
  this = (RareRewardNotification *)(n->klass->vtable).Initialize.methodPtr;
  l = (*(code *)(n->klass->vtable).get_Lifetime.method)();
  if (this_01 != (TertiaryNotificationUI *)0x0) {
    TertiaryNotificationUI::TertiaryNotificationUI_Initialize
              (this_01,(Notification *)n,l,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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

