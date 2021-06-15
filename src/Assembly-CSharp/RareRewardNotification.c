
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::RareRewardNotification::RareRewardNotification_Initialize
               (RareRewardNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0xb,data._0_3_);
  pTVar1 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pPVar2 == (Pool *)0x0)) goto code_?;
  if ((pPVar2->klass->_0).element_class != (TypeInfo__MV__Common__RewardRarity->_0).element_class)
  goto code_?;
  pcVar3 = (char *)func_?();
  cVar4 = *pcVar3;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 == (MVAvatar *)0x0) goto code_?;
  this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0);
  pTVar1 = (Type *)func_?(TypeInfo__System__Byte);
  pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if ((this_02 == (MVRuntimeDataVariableClampedFloat *)0x0) || (pPVar2 == (Pool *)0x0))
  goto code_?;
  if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar5 = (int32_t *)func_?();
    this_03 = MVPlayerContainer::MVPlayerContainer_get_Item
                        ((MVPlayerContainer *)this_02,*piVar5,(MethodInfo *)0x0);
    pTVar1 = (Type *)func_?(TypeInfo__System__Byte);
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 == (Pool *)0x0) goto code_?;
    if ((pPVar2->klass->_0).element_class != (TypeInfo__MV__Common__RewardType->_0).element_class)
    goto code_?;
    piVar6 = (int *)func_?();
    iVar7 = *piVar6;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pSVar8 = StringLiteral__xp;
    if (iVar7 == 1) {
code_?:
      pSVar8 = TM::TM__(pSVar8,(MethodInfo *)0x0);
    }
    else {
      pSVar8 = StringLiteral__test;
      if (iVar7 != 2) {
        pSVar8 = StringLiteral__gold;
        if (iVar7 != 3) {
          pSVar8 = StringLiteral_ERROR;
        }
        goto code_?;
      }
    }
    pTVar1 = (Type *)func_?();
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 == (Pool *)0x0) goto code_?;
    if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      func_?();
      pTVar9 = (this->fields).text;
      TM::TM__(StringLiteral__0__won__1__2__from_spins_,(MethodInfo *)0x0);
      if ((this_03 != (MVPlayer *)0x0) &&
         (iVar10 = GamePointGainEffect::GamePointGainEffect_get_ID
                             ((GamePointGainEffect *)this_03,(MethodInfo *)0x0), iVar10 != 0)) {
        arg0 = *(Object **)(iVar10 + 0xc);
        format = (String *)&UNK_?;
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        mscorlib.dll::System::String::String_Format_2
                  (format,arg0,arg1,(Object *)pSVar8,(MethodInfo *)0x0);
        if (pTVar9 != (Text *)0x0) {
          (*(code *)(pTVar9->klass->vtable).set_text.method)(pTVar9);
          if (cVar4 == '\x03') {
            pDVar11 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(this->fields).EpicPanel;
            if ((pDVar11 ==
                 (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) ||
               (pGVar12 = (GameObject *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                    (pDVar11,(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0))
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar12,1,(MethodInfo *)0x0);
            pDVar11 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(this->fields).LegendaryPanel;
          }
          else {
            if (cVar4 != '\x04') {
              return;
            }
            pDVar11 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(this->fields).LegendaryPanel;
            if ((pDVar11 ==
                 (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) ||
               (pGVar12 = (GameObject *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                    (pDVar11,(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0))
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar12,1,(MethodInfo *)0x0);
            pDVar11 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(this->fields).EpicPanel;
          }
          if ((pDVar11 !=
               (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)0x0) &&
             (pGVar12 = (GameObject *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                  (pDVar11,(MethodInfo *)0x0), pGVar12 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar12,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
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
    func_?(_UNK_?);
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

