
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
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar2 == (Object *)0x0)) goto code_?;
  pIVar3 = (Int32__Class *)TypeInfo__MV__Common__RewardRarity;
  if ((pOVar2->klass->_0).element_class != (TypeInfo__MV__Common__RewardRarity->_0).element_class)
  goto code_?;
  puVar4 = (undefined1 *)func_?(pOVar2);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(*puVar4,data._0_3_);
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
  this_00 = (pMVar5->fields).playerContainer;
  uStack_6 = 9;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_6);
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (this_01,pOVar2,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if ((this_00 == (MVPlayerContainer *)0x0) || (pOVar2 == (Object *)0x0)) goto code_?;
  pIVar3 = TypeInfo__System__Int32;
  if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar7 = (int32_t *)func_?(pOVar2);
    pMVar8 = MVPlayerContainer::MVPlayerContainer_get_Item(this_00,*piVar7,(MethodInfo *)0x0);
    uStack_9 = 5;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_9);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_01,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 == (Object *)0x0) goto code_?;
    pIVar3 = (Int32__Class *)TypeInfo__MV__Common__RewardType;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__MV__Common__RewardType->_0).element_class)
    goto code_?;
    piVar10 = (int *)func_?(pOVar2);
    iVar11 = *piVar10;
    if (cRam_? == '\0') {
      func_?(&StringLiteral__xp);
      func_?(&StringLiteral_ERROR);
      func_?(&StringLiteral__test);
      func_?(&StringLiteral__gold);
      cRam_? = '\x01';
    }
    pSVar12 = StringLiteral__xp;
    if (iVar11 == 1) {
code_?:
      pSVar12 = TM::TM__(pSVar12,(MethodInfo *)0x0);
    }
    else {
      pSVar12 = StringLiteral__test;
      if (iVar11 != 2) {
        pSVar12 = StringLiteral__gold;
        if (iVar11 != 3) {
          pSVar12 = StringLiteral_ERROR;
        }
        goto code_?;
      }
    }
    uStack_13 = 4;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_13);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_01,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 == (Object *)0x0) goto code_?;
    pIVar3 = TypeInfo__System__Int32;
    if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      func_?(pOVar2);
      pTVar14 = (pRVar1->fields).text;
      format = TM::TM__(StringLiteral__0__won__1__2__from_spins_,(MethodInfo *)0x0);
      if ((pMVar8 != (MVPlayer *)0x0) &&
         (pUVar15 = (pMVar8->fields)._UserProfileData_k__BackingField,
         pUVar15 != (UserProfileData *)0x0)) {
        arg0 = (pUVar15->fields).UserName;
        pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
        pSVar12 = mscorlib.dll::System::String::String_Format_2
                            (format,(Object *)arg0,pOVar2,(Object *)pSVar12,(MethodInfo *)0x0);
        if (pTVar14 != (Text *)0x0) {
          (*(pTVar14->klass->vtable).set_text.methodPtr)
                    (pTVar14,pSVar12,(pTVar14->klass->vtable).set_text.method);
          if (data._3_1_ == '\x03') {
            pGVar16 = (pRVar1->fields).EpicPanel;
            if ((pGVar16 == (GameObject *)0x0) ||
               (pGVar16 = (GameObject *)
                          mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                                    ((Void *)pGVar16,(MethodInfo *)0x0),
               pGVar16 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar16,1,(MethodInfo *)0x0);
            pGVar16 = (pRVar1->fields).LegendaryPanel;
          }
          else {
            if (data._3_1_ != '\x04') {
              return;
            }
            pGVar16 = (pRVar1->fields).LegendaryPanel;
            if ((pGVar16 == (GameObject *)0x0) ||
               (pGVar16 = (GameObject *)
                          mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                                    ((Void *)pGVar16,(MethodInfo *)0x0),
               pGVar16 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar16,1,(MethodInfo *)0x0);
            pGVar16 = (pRVar1->fields).EpicPanel;
          }
          if ((pGVar16 != (GameObject *)0x0) &&
             (pGVar16 = (GameObject *)
                        mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                                  ((Void *)pGVar16,(MethodInfo *)0x0), pGVar16 != (GameObject *)0x0)
             ) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar16,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(pOVar2,pIVar3);
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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

