
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
  pRVar1 = this;
  this = (RareRewardNotification *)CONCAT13(0xb,this._0_3_);
  (pRVar1->fields)._.timeSinceStart = 0.0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_01 = data;
  if ((data == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar3.m_Index == 0)) goto code_?;
  pIVar4 = (Int32__Class *)TypeInfo__MV__Common__RewardRarity;
  if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
      (TypeInfo__MV__Common__RewardRarity->_0).element_class) goto code_?;
  puVar5 = (undefined1 *)func_?(TVar3.m_Index);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(*puVar5,data._0_3_);
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
  this_00 = (pMVar6->fields).playerContainer;
  uStack_7 = 9;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_7);
  TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if ((this_00 == (MVPlayerContainer *)0x0) || (TVar3.m_Index == 0)) goto code_?;
  pIVar4 = TypeInfo__System__Int32;
  if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) == (TypeInfo__System__Int32->_0).element_class
     ) {
    piVar8 = (int32_t *)func_?(TVar3.m_Index);
    pMVar9 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar8,(MethodInfo *)0x0);
    uStack_10 = 5;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_10);
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index == 0) goto code_?;
    pIVar4 = (Int32__Class *)TypeInfo__MV__Common__RewardType;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__MV__Common__RewardType->_0).element_class) goto code_?;
    piVar11 = (int *)func_?(TVar3.m_Index);
    iVar12 = *piVar11;
    if (cRam_? == '\0') {
      func_?(&StringLiteral__xp);
      func_?(&StringLiteral_ERROR);
      func_?(&StringLiteral__test);
      func_?(&StringLiteral__gold);
      cRam_? = '\x01';
    }
    pSVar13 = StringLiteral__xp;
    if (iVar12 == 1) {
code_?:
      pSVar13 = TM::TM__(pSVar13,(MethodInfo *)0x0);
    }
    else {
      pSVar13 = StringLiteral__test;
      if (iVar12 != 2) {
        pSVar13 = StringLiteral__gold;
        if (iVar12 != 3) {
          pSVar13 = StringLiteral_ERROR;
        }
        goto code_?;
      }
    }
    uStack_14 = 4;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_14);
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index == 0) goto code_?;
    pIVar4 = TypeInfo__System__Int32;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      func_?(TVar3.m_Index);
      pTVar15 = (pRVar1->fields).text;
      format = TM::TM__(StringLiteral__0__won__1__2__from_spins_,(MethodInfo *)0x0);
      if ((pMVar9 != (MVPlayer *)0x0) &&
         (pUVar16 = (pMVar9->fields)._UserProfileData_k__BackingField,
         pUVar16 != (UserProfileData *)0x0)) {
        arg0 = (pUVar16->fields).UserName;
        pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
        pSVar13 = mscorlib.dll::System::String::String_Format_2
                            (format,(Object *)arg0,pOVar2,(Object *)pSVar13,(MethodInfo *)0x0);
        if (pTVar15 != (Text *)0x0) {
          (*(code *)(pTVar15->klass->vtable).set_text.method)
                    (pTVar15,pSVar13,
                     (pTVar15->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          if (data._3_1_ == '\x03') {
            pGVar17 = (pRVar1->fields).EpicPanel;
            if ((pGVar17 == (GameObject *)0x0) ||
               (pGVar17 = (GameObject *)
                          UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                          UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar17,(MethodInfo *)0x0),
               pGVar17 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar17,1,(MethodInfo *)0x0);
            pGVar17 = (pRVar1->fields).LegendaryPanel;
          }
          else {
            if (data._3_1_ != '\x04') {
              return;
            }
            pGVar17 = (pRVar1->fields).LegendaryPanel;
            if ((pGVar17 == (GameObject *)0x0) ||
               (pGVar17 = (GameObject *)
                          UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                          UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar17,(MethodInfo *)0x0),
               pGVar17 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar17,1,(MethodInfo *)0x0);
            pGVar17 = (pRVar1->fields).EpicPanel;
          }
          if ((pGVar17 != (GameObject *)0x0) &&
             (pGVar17 = (GameObject *)
                        UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                        UnsafeUtility::UnsafeUtility_AsRef_1((Void *)pGVar17,(MethodInfo *)0x0),
             pGVar17 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar17,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(TVar3.m_Index,pIVar4);
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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

