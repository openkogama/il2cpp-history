
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_AddModifier
               (ClientSideNPCInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ClientSideNPCInteractable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__ContainsKey_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__get_Item_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ignore_add_modifier);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ClientSideNPCInteractable->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ClientSideNPCInteractable);
  }
  pDVar1 = TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary;
  if (pDVar1 != (Dictionary_2_AvatarModifierPackageType_System_Single_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__FindEntry
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,type,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__ContainsKey_AvatarModifierPackageType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
code_?:
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Ignore_add_modifier,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) {
      pMVar6 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe(pMVar5,id,(MethodInfo *)0x0);
      if (pMVar6 == (MVPlayer *)0x0) goto code_?;
      if (*(int *)&(TypeInfo__ClientSideNPCInteractable->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ClientSideNPCInteractable);
      }
      pDVar1 = TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary;
      if (pDVar1 != (Dictionary_2_AvatarModifierPackageType_System_Single_ *)0x0) {
        fVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,type,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__get_Item_AvatarModifierPackageType_
                          );
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) {
          pMVar6 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe(pMVar5,id,(MethodInfo *)0x0)
          ;
          (*(this->klass->vtable).TakeDamage.methodPtr)
                    (this,fVar7,pMVar6,0,(this->klass->vtable).TakeDamage.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ClearModifiers() */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_ClearModifiers
               (ClientSideNPCInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ignore_ClearModifiers);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral__ignore_ClearModifiers;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Heal(Single, MVPlayer) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_Heal
               (ClientSideNPCInteractable *this,float amount,MVPlayer *healer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = ClientSideNPCInteractable_IsDead(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pMVar2 = (this->fields)._._.worldObjectParent;
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)
                          (pMVar2,(pMVar2->klass->vtable).get_RunTimeData.method);
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar3 = Extensions::Extensions_GetObscuredType
                       (hashtable,StringLiteral_health,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
        FUN_?(pOVar3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStack_5 = pOVar3[1].klass;
      uStack_6 = (Byte__Array *)pOVar3[1].monitor;
      pOStack_7 = pOVar3[2].klass;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_InternalDecrypt((ObscuredFloat *)&uStack_5,(MethodInfo *)0x0);
      value_00 = (this->fields).maxHealth;
      if (fVar8 + amount <= value_00) {
        value_00 = fVar8 + amount;
      }
      pAVar9 = (this->fields).healCallback;
      if (pAVar9 != (Action_2_Single_MVPlayer_ *)0x0) {
        (*(pAVar9->fields)._._.invoke_impl)
                  ((pAVar9->fields)._._.method_code,CONCAT44(in_XMM1_Db,amount),healer,
                   (pAVar9->fields)._._.method);
        pMVar2 = (this->fields)._._.worldObjectParent;
        if (pMVar2 != (MVWorldObjectClient *)0x0) {
          uVar10 = (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)();
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOStack_7 = (Object__Class *)0x0;
          uStack_5._0_4_ = 0;
          uStack_5._4_1_ = 0;
          uStack_5._5_1_ = 0;
          uStack_5._6_1_ = 0;
          uStack_5._7_1_ = 0;
          uStack_6 = (Byte__Array *)0x0;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_InternalEncrypt(value_00,(MethodInfo *)0x0);
          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat__ctor((ObscuredFloat *)&uStack_5,value,(MethodInfo *)0x0);
          bVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                  ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                            ((MethodInfo *)0x0);
          if (bVar1 != 0) {
            pOStack_7 = (Object__Class *)CONCAT44(pOStack_7._4_4_,value_00);
          }
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          iStack_11 = (int32_t)uStack_5;
          AStack_12 = uStack_5._4_4_;
          uStack_13 = (undefined4)uStack_6;
          uStack_14 = uStack_6._4_4_;
          uStack_15 = pOStack_7;
          FUN_?(uVar10,pOStack_7,&iStack_11);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Init(Action`3[Single,MVPlayer,MV.Common.PlayerKilledByType], Action`2[Single,MVPlayer]) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_Init
               (ClientSideNPCInteractable *this,
               Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *takeDamageCallback,
               Action_2_Single_MVPlayer_ *healCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RespawnInterval);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).takeDamageCallback = takeDamageCallback;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).takeDamageCallback >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).healCallback = healCallback;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).healCallback >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pMVar7 = (this->fields)._._.worldObjectParent;
  if (pMVar7 != (MVWorldObjectClient *)0x0) {
    key = (pMVar7->fields)._.type;
    if (*(int *)&(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_MV__WorldObject__WorldObjectType_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
              TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->static_fields->values;
    if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                         ->klass->rgctx_data[0x21].method);
      if (iVar8 < 0) {
        this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
      }
      else {
        if (*(int *)&(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->_1).field_0x1c
            == 0) {
          FUN_?(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository);
        }
        this_01 = TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->static_fields->
                  values;
        if (this_01 ==
            (Dictionary_2_MV_WorldObject_WorldObjectType_Dictionary_2_System_Object_System_Object_ *
            )0x0) goto code_?;
        pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_MV__WorldObject__WorldObjectType_
                           );
        this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                     HashtableFunctions_DeepCopyHashTable_1(pDVar9,(MethodInfo *)0x0);
      }
      if ((this_02 !=
           (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)0x0) &&
         (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)this_02,
                              (Object *)StringLiteral_RespawnInterval,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pOVar10 != (Object *)0x0)) {
        if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar10,lRam_?);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pMVar7 = (this->fields)._._.worldObjectParent;
        (this->fields).respawnInterval = *(int32_t *)&pOVar10[1].klass;
        if (pMVar7 != (MVWorldObjectClient *)0x0) {
          pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                   (*(pMVar7->klass->vtable).get_RunTimeData.methodPtr)
                             (pMVar7,(pMVar7->klass->vtable).get_RunTimeData.method);
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar10 = Extensions::Extensions_GetObscuredType
                             (pDVar9,StringLiteral_health,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class !=
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
              FUN_?(pOVar10,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            auStack_12._0_4_ = *(undefined4 *)&pOVar10[1].klass;
            auStack_12._4_4_ = *(ACTkByte4 *)((longlong)&pOVar10[1].klass + 4);
            auStack_12._8_4_ = *(undefined4 *)&pOVar10[1].monitor;
            auStack_12._12_4_ = *(undefined4 *)((longlong)&pOVar10[1].monitor + 4);
            auStack_12._16_8_ = pOVar10[2].klass;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            fVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredFloat::ObscuredFloat_InternalDecrypt
                               ((ObscuredFloat *)auStack_12,(MethodInfo *)0x0);
            (this->fields).maxHealth = fVar13;
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean IsDead() */

bool Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead
               (ClientSideNPCInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_deathTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.worldObjectParent;
  iVar2 = (this->fields).respawnInterval;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                          (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar3 = Extensions::Extensions_GetObscuredType
                       (hashtable,StringLiteral_deathTime,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        FUN_?(pOVar3,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      OStack_6.currentCryptoKey = *(int32_t *)&pOVar3[1].klass;
      OStack_6.hiddenValue = *(int32_t *)((longlong)&pOVar3[1].klass + 4);
      OStack_6.fakeValue = *(int32_t *)&pOVar3[1].monitor;
      OStack_6._12_4_ = *(undefined4 *)((longlong)&pOVar3[1].monitor + 4);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_InternalDecrypt(&OStack_6,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar8 != (MVGameControllerBase *)0x0) &&
         (this_00 = (pMVar8->fields).game, this_00 != (MVNetworkGame *)0x0)) {
        iVar9 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0)
        ;
        return iVar9 - iVar7 < iVar2;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void RemoveModifier(AvatarModifierPackageType, Int32) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_RemoveModifier
               (ClientSideNPCInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,CONCAT44(in_register_00000014,type),
                  CONCAT44(in_register_00000084,id));
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ignore_remove_modifier);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_Ignore_remove_modifier;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_Reset
               (ClientSideNPCInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_deathTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.worldObjectParent;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    obscuredValue = (Object *)(*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)();
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       (obscuredValue,(MethodInfo *)0x0);
    target = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
         (target = pDVar2,
         (Dictionary_2_System_Object_System_Object___Class *)
         (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pMVar1 = (this->fields)._._.worldObjectParent;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      worldObjectType = (pMVar1->fields)._.type;
      if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).field_0x1c == 0) {
        FUN_?();
      }
      pDVar2 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
               RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0);
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                (target,pDVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._._.worldObjectParent;
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        (*(pMVar1->klass->vtable).set_RunTimeData.methodPtr)
                  (pMVar1,target,(pMVar1->klass->vtable).set_RunTimeData.method);
        pMVar1 = (this->fields)._._.worldObjectParent;
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          uVar5 = (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                            (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
          iVar6 = (this->fields).respawnInterval;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar7 != (MVGameControllerBase *)0x0) &&
             (this_00 = (pMVar7->fields).game, this_00 != (MVNetworkGame *)0x0)) {
            iVar8 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                              (this_00,(MethodInfo *)0x0);
            iVar6 = iVar8 - iVar6;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_9 = 0;
            uStack_10 = 0;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?();
            }
            iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_Encrypt(iVar6,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            }
            uStack_10._0_5_ = CONCAT14(1,(int)uStack_10);
            uStack_9 = CONCAT44(iVar8,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                                       static_fields->cryptoKey);
            bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                    ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                              ((MethodInfo *)0x0);
            iVar12 = 0;
            if (bVar11 != 0) {
              iVar12 = iVar6;
            }
            uStack_10._0_4_ = iVar12;
            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
              FUN_?();
            }
            FUN_?(uVar5,StringLiteral_deathTime,&uStack_9);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TakeDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_TakeDamage
               (ClientSideNPCInteractable *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,CONCAT44(in_XMM1_Db,amount),damageDealer,
                  CONCAT44(in_register_0000008c,damageType));
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_deathTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = ClientSideNPCInteractable_IsDead(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pMVar2 = (this->fields)._._.worldObjectParent;
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
             (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)
                       (pMVar2,(pMVar2->klass->vtable).get_RunTimeData.method);
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar4 = Extensions::Extensions_GetObscuredType(pDVar3,StringLiteral_health,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    if (pOVar4 != (Object *)0x0) {
      if ((pOVar4->klass->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
        FUN_?(pOVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      auStack_6._0_8_ = pOVar4[1].klass;
      auStack_6._8_8_ = pOVar4[1].monitor;
      pOStack_7 = pOVar4[2].klass;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)auStack_6,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._._.worldObjectParent;
      fVar8 = fVar8 - amount;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        uVar9 = (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)();
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOStack_7 = (Object__Class *)0x0;
        auStack_6._0_8_ = (Object__Class *)0x0;
        auStack_6._8_8_ = (Byte__Array *)0x0;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        AVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_InternalEncrypt(fVar8,(MethodInfo *)0x0);
        Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat__ctor((ObscuredFloat *)auStack_6,AVar10,(MethodInfo *)0x0);
        bVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
        uVar11 = auStack_6._0_8_;
        if (bVar1 != 0) {
          pOStack_7 = (Object__Class *)CONCAT44(pOStack_7._4_4_,fVar8);
        }
        iStack_12 = auStack_6._0_4_;
        AStack_13.b1 = auStack_6[4];
        AStack_13.b2 = auStack_6[5];
        AStack_13.b3 = auStack_6[6];
        AStack_13.b4 = auStack_6[7];
        uStack_14 = auStack_6._8_4_;
        uStack_15 = auStack_6._12_4_;
        pOStack_16 = pOStack_7;
        auStack_6._0_8_ = uVar11;
        FUN_?(uVar9,pOStack_7,&iStack_12);
        if (fVar8 <= 0.0) {
          pMVar2 = (this->fields)._._.worldObjectParent;
          if (pMVar2 == (MVWorldObjectClient *)0x0) goto DAT_?;
          worldObjectType = (pMVar2->fields)._.type;
          if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).field_0x1c == 0)
          {
            FUN_?();
          }
          pDVar3 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
                   RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0)
          ;
          if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
             (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar3,(Object *)StringLiteral_health,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pOVar4 == (Object *)0x0)) goto DAT_?;
          if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar4,lRam_?);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pMVar2 = (this->fields)._._.worldObjectParent;
          fVar8 = *(float *)&pOVar4[1].klass;
          if (pMVar2 == (MVWorldObjectClient *)0x0) goto DAT_?;
          uVar9 = (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)();
          value = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          auStack_6._0_4_ = 0;
          auStack_6[4] = 0;
          auStack_6[5] = 0;
          auStack_6[6] = 0;
          auStack_6[7] = 0;
          auStack_6._8_8_ = (Byte__Array *)0x0;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                  ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          auStack_6[0xc] = 1;
          auStack_6._4_4_ = iVar17;
          auStack_6._0_4_ =
               TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
          bVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                  ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                            ((MethodInfo *)0x0);
          iVar17 = 0;
          if (bVar1 != 0) {
            iVar17 = value;
          }
          auStack_6._8_4_ = iVar17;
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          FUN_?(uVar9,StringLiteral_deathTime,auStack_6);
        }
        pAVar18 = (this->fields).takeDamageCallback;
        if (pAVar18 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
          (*(pAVar18->fields)._._.invoke_impl)
                    ((pAVar18->fields)._._.method_code,CONCAT44(in_XMM1_Db,amount),damageDealer,
                     (char)damageType,(pAVar18->fields)._._.method);
          pMVar2 = (this->fields)._._.worldObjectParent;
          if (pMVar2 != (MVWorldObjectClient *)0x0) {
            uVar9 = (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)();
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOStack_7 = (Object__Class *)0x0;
            auStack_6._0_4_ = 0;
            auStack_6[4] = 0;
            auStack_6[5] = 0;
            auStack_6[6] = 0;
            auStack_6[7] = 0;
            auStack_6._8_8_ = (Byte__Array *)0x0;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            AVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_InternalEncrypt(fVar8,(MethodInfo *)0x0);
            Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat__ctor((ObscuredFloat *)auStack_6,AVar10,(MethodInfo *)0x0);
            bVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                    ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                              ((MethodInfo *)0x0);
            if (bVar1 != 0) {
              pOStack_7 = (Object__Class *)CONCAT44(pOStack_7._4_4_,fVar8);
            }
            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
              FUN_?();
            }
            uVar11 = auStack_6._0_8_;
            iStack_12 = auStack_6._0_4_;
            AStack_13.b1 = auStack_6[4];
            AStack_13.b2 = auStack_6[5];
            AStack_13.b3 = auStack_6[6];
            AStack_13.b4 = auStack_6[7];
            uStack_14 = auStack_6._8_4_;
            uStack_15 = auStack_6._12_4_;
            pOStack_16 = pOStack_7;
            auStack_6._0_8_ = uVar11;
            FUN_?(uVar9,pOStack_7,&iStack_12);
            return;
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ClientSideNPCInteractable() */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ClientSideNPCInteractable);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Add_AvatarModifierPackageType__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Dictionary__
            );
  if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
  Dictionary_2_System_Int32Enum_System_Single__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Single_ *)this,0x12,_UNK_?,
             (InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Add_AvatarModifierPackageType__float_
             ->klass->rgctx_data[0x22].method);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
  Dictionary_2_System_Int32Enum_System_Single__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Single_ *)this,8,_UNK_?,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Add_AvatarModifierPackageType__float_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary =
       (Dictionary_2_AvatarModifierPackageType_System_Single_ *)this;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__ClientSideNPCInteractable->static_fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}

