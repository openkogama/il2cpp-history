
/* Void Destroy() */

void Assembly-CSharp.dll::BodyClone::BodyClone_Destroy(BodyClone *this,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 == (BodyAccessoriesController *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pBVar1->fields).accessoryLoader != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              ((pBVar1->fields).accessoryLoader,(MethodInfo *)0x0);
  }
  (pBVar1->fields).accessoryLoader = (AccessoryLoader *)0x0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(pBVar1->fields).accessoryLoader >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  if ((pBVar1->fields).accessoryMap !=
      (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    pDStack_9 = (Dictionary_2_System_UInt32_System_Object_ *)(pBVar1->fields).accessoryMap;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pDStack_9 >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    uStack_10 = (ulonglong)(uint)(pDStack_9->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    uStack_13 = 0;
    auStack_2._8_8_ = uStack_10;
    KStack_14.key = 0;
    KStack_14._4_4_ = 0;
    KStack_14.value = (Object *)0x0;
    uStack_15._0_4_ = 2;
    uStack_15._4_4_ = 0;
    auStack_2._0_8_ = pDStack_9;
    while (bVar16 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              auStack_2,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                             ), bVar16 != 0) {
      if ((Component *)KStack_14.value == (Component *)0x0) {
        FUN_?();
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)KStack_14.value,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
    }
    (pBVar1->fields).accessoryMap = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0
    ;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(pBVar1->fields).accessoryMap >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    iVar17 = iRam_?;
    (pBVar1->fields).accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (iVar17 != 0) {
      uVar4 = (uint)((ulonglong)&(pBVar1->fields).accessoryData >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  return;
}


/* Void Initialize(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BodyClone::BodyClone_Initialize
               (BodyClone *this,int32_t bodyWoId,
               Dictionary_2_System_Object_System_Object_ *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BodyAccessoriesController);
    LOCK();
    UNLOCK();
    FUN_?(&MVBodyObject_MethodInfo__UnityEngine__Component__GetComponent<MVBodyObject>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_MVBodyObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      MVBodyObject_MethodInfo__UnityEngine__Component__GetComponent<MVBodyObject>__)
  ;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar1 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar1[1].klass != (Object__Class *)0x0) {
      bodyData = (BodyData *)pOVar1[4].monitor;
      pBVar2 = (BodyAccessoriesController *)FUN_?(TypeInfo__BodyAccessoriesController);
      BodyAccessoriesController::BodyAccessoriesController__ctor
                (pBVar2,bodyWoId,bodyData,accessoryData,1,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).bodyAccessoriesController = pBVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).bodyAccessoriesController >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      pBVar2 = (this->fields).bodyAccessoriesController;
      if (pBVar2 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                  (pBVar2,1,(MethodInfo *)0x0);
        pBVar2 = (this->fields).bodyAccessoriesController;
        if (pBVar2 != (BodyAccessoriesController *)0x0) {
          BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                    (pBVar2,accessoryData,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Failed_to_get_MVBodyObject,(MethodInfo *)0x0);
  return;
}


/* Void RefreshAccessories(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BodyClone::BodyClone_RefreshAccessories
               (BodyClone *this,Dictionary_2_System_Object_System_Object_ *accessoryData,
               MethodInfo *method)

{
  this_01 = (this->fields).bodyAccessoriesController;
  if (this_01 == (BodyAccessoriesController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pBStackX_8 = this_01;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<AvatarAccessory>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BodyAccessoriesController____c__DisplayClass25_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_parse_slot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  uStack_3 = 0;
  uStack_4 = 0;
  DStack_5._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_5._version = 0;
  DStack_5._index = 0;
  DStack_5._current.key = (Object *)0x0;
  DStack_5._current.value = (Object *)0x0;
  DStack_5._getEnumeratorRetType = 0;
  DStack_5._36_4_ = 0;
  pOVar6 = (Object__Class *)0x0;
  aiStackX_10[0] = 0;
  (this_01->fields).accessoryData = accessoryData;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(this_01->fields).accessoryData >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  this_02 = (Dictionary_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__);
  pDVar12 = (Dictionary_2_System_Object_System_Object_ *)(this_01->fields).accessoryMap;
  pDStackX_20 = this_02;
  if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&RStack_13 >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    RStack_13._length = (pDVar12->fields)._version;
    RStack_13._12_4_ = 0;
    uStack_14 = 2;
    uStack_15 = 0;
    uStack_16 = 0;
    aDStack_17[0]._version = RStack_13._length;
    aDStack_17[0]._index = 0;
    aDStack_17[0]._current.key = 0;
    aDStack_17[0]._current._4_4_ = 0;
    aDStack_17[0]._current.value = (Object *)0x0;
    aDStack_17[0]._getEnumeratorRetType = 2;
    aDStack_17[0]._36_4_ = 0;
    RStack_13._pointer._value = pDVar12;
    aDStack_17[0]._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar12;
    while (bVar18 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (aDStack_17,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                              ), uVar19 = aDStack_17[0]._current._0_8_, bVar18 != 0) {
      pOVar20 = (Object__Class *)0x0;
      bVar18 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
                         (this_01,(AvatarAccessory *)aDStack_17[0]._current.value,(MethodInfo *)0x0)
      ;
      if (bVar18 == 0) {
        if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          FUN_?();
          FUN_?();
          goto code_?;
        }
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__Add
                  ((List_1_System_UInt32Enum_ *)this_02,(UInt32Enum__Enum)uVar19,
                   MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                  );
      }
    }
    if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&RStack_13 >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      RStack_13._8_8_ = (ulonglong)*(uint *)((longlong)&(this_02->fields)._entries + 4) << 0x20;
      uStack_15 = 0;
      uStack_3 = RStack_13._8_8_;
      uStack_4 = 0;
      RStack_13._pointer._value = this_02;
      pDStack_2 = this_02;
      while (pOVar20 = (Object__Class *)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
            , pDStack_2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (uStack_3._4_4_ != *(int *)((longlong)&(pDStack_2->fields)._entries + 4)) {
code_?:
          if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
               ->klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (pDStack_2 == (Dictionary_2_System_Object_System_Object_ *)0x0)
          goto code_?;
          if (uStack_3._4_4_ != *(int *)((longlong)&(pDStack_2->fields)._entries + 4))
          goto code_?;
          uStack_3 = CONCAT44(uStack_3._4_4_,*(int *)&(pDStack_2->fields)._entries + 1);
          uStack_4 = uStack_4 & 0xffffffff00000000;
          pDVar12 = (this_01->fields).accessoryData;
          if (pDVar12 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&RStack_13 >> 0xc);
              uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
              do {
                uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                LOCK();
                bVar11 = uVar9 == *puVar10;
                if (bVar11) {
                  *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            RStack_13._length = (pDVar12->fields)._version;
            RStack_13._12_4_ = 0;
            uStack_14 = 2;
            uStack_15 = 0;
            uStack_16 = 0;
            DStack_5._version = RStack_13._length;
            DStack_5._index = 0;
            DStack_5._current.key = (Object *)0x0;
            DStack_5._current.value = (Object *)0x0;
            DStack_5._getEnumeratorRetType = 2;
            DStack_5._36_4_ = 0;
            uStack_21 = 0;
            pDStack_22 = &DStack_5;
            RStack_13._pointer._value = pDVar12;
            DStack_5._dictionary = pDVar12;
            do {
              while( true ) {
                bVar18 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                         Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                   (&DStack_5,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                   );
                pOVar20 = (Object__Class *)DStack_5._current.value;
                if (bVar18 == 0) {
                  return;
                }
                aiStackX_10[0] = -1;
                pOVar23 = pOVar6;
                if ((Object__Class *)DStack_5._current.key != (Object__Class *)0x0) {
                  if (((Il2CppClass_0 *)&(DStack_5._current.key)->klass)->image ==
                      pIRam0000000182dc50c0) {
                    pOVar23 = (Object__Class *)DStack_5._current.key;
                  }
                  if (pOVar23 == (Object__Class *)0x0) goto code_?;
                }
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pOVar23 != (Object__Class *)0x0) break;
                aiStackX_10[0] = 0;
code_?:
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
              }
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_24 = (ulonglong)*(uint *)&(pOVar23->_0).name;
              info = mscorlib.dll::System::Globalization::NumberFormatInfo::
                     NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                FUN_?();
              }
              RStack_13._8_8_ = uStack_24;
              RStack_13._pointer._value = (undefined1 *)((longlong)&(pOVar23->_0).name + 4);
              bVar18 = mscorlib.dll::System::Number::Number_TryParseInt32
                                 (&RStack_13,NumberStyles__Enum_Integer,info,aiStackX_10,
                                  (MethodInfo *)0x0);
              if (bVar18 == 0) goto code_?;
              object = (Object *)
                       FUN_?(TypeInfo__BodyAccessoriesController____c__DisplayClass25_0);
              if (object == (Object *)0x0) goto code_?;
              object[1].monitor = (MonitorData *)this_01;
              func_?(&object[1].monitor);
              *(int32_t *)&object[1].klass = aiStackX_10[0];
              pOVar23 = pOVar6;
              if (pOVar20 != (Object__Class *)0x0) {
                pIVar25 = ((Il2CppClass_0 *)&((Object *)pOVar20)->klass)->image;
                bVar26 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
                if (((bVar26 <= *(byte *)&pIVar25[4].assembly) &&
                    (*(Dictionary_2_System_Object_System_Object___Class **)
                      ((longlong)pIVar25[2].codeGenModule + (ulonglong)bVar26 * 8 + -8) ==
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    )) && (pOVar23 = pOVar20, pOVar20 != (Object__Class *)0x0))
                goto code_?;
                goto code_?;
              }
code_?:
              pBStackX_8 = (BodyAccessoriesController *)CONCAT62(pBStackX_8._2_6_,4);
              pEVar27 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,&pBStackX_8)
              ;
              pOVar20 = (Object__Class *)0x0;
              pSVar28 = mscorlib.dll::System::Enum::Enum_ToString_2
                                  (pEVar27,StringLiteral_d,(MethodInfo *)0x0);
              if (pOVar23 == (Object__Class *)0x0) goto code_?;
              pOVar20 = (Object__Class *)
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              ;
              pOVar29 = (Object__Class *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                  ((Dictionary_2_System_Object_System_Object_ *)pOVar23,
                                   (Object *)pSVar28,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
              url = pOVar6;
              if (pOVar29 != (Object__Class *)0x0) {
                if ((pOVar29->_0).image == pIRam0000000182dc50c0) {
                  url = pOVar29;
                }
                if (url != (Object__Class *)0x0) goto code_?;
                goto code_?;
              }
code_?:
              pDVar30 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                       (this_01->fields).accessoryMap;
              if (pDVar30 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
              goto code_?;
              pOVar20 = (Object__Class *)
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                        ->klass->rgctx_data[0x21].method;
              iVar31 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,UnityEngine::Vector3]::
                       Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                 (pDVar30,*(Int32Enum__Enum *)&object[1].klass,(MethodInfo *)pOVar20)
              ;
              if (iVar31 < 0) goto code_?;
              pDVar32 = (this_01->fields).accessoryMap;
              if (pDVar32 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
              goto code_?;
              pOVar20 = (Object__Class *)
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
              ;
              pOVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar32,
                                   *(Int32Enum__Enum *)&object[1].klass,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                  );
              if (pOVar33 == (Object *)0x0) goto code_?;
              pOVar29 = pOVar33[2].klass;
              if (pOVar29 == url) {
code_?:
                pDVar30 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                         (this_01->fields).accessoryMap;
                if (pDVar30 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
                goto code_?;
                pOVar20 = (Object__Class *)
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                          ->klass->rgctx_data[0x21].method;
                iVar31 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,UnityEngine::Vector3]::
                         Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                   (pDVar30,*(Int32Enum__Enum *)&object[1].klass,
                                    (MethodInfo *)pOVar20);
                if (-1 < iVar31) {
                  pDVar32 = (this_01->fields).accessoryMap;
                  if (pDVar32 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
                  goto code_?;
                  pOVar20 = (Object__Class *)
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                  ;
                  pOVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar32,
                                       *(Int32Enum__Enum *)&object[1].klass,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                      );
                  if (pOVar33 == (Object *)0x0) goto code_?;
                  pOVar20 = pOVar33[2].klass;
                  if ((pOVar20 == url) ||
                     (((pOVar20 != (Object__Class *)0x0 && (url != (Object__Class *)0x0)) &&
                      ((*(int *)&(pOVar20->_0).name == *(int *)&(url->_0).name &&
                       (bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                           ((uint8_t *)((longlong)&(pOVar20->_0).name + 4),
                                            (uint8_t *)((longlong)&(url->_0).name + 4),
                                            (longlong)*(int *)&(pOVar20->_0).name * 2,
                                            (MethodInfo *)0x0), bVar18 != 0)))))) {
                    pBStackX_8 = (BodyAccessoriesController *)CONCAT62(pBStackX_8._2_6_,3);
                    pEVar27 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,
                                                    &pBStackX_8);
                    pSVar28 = mscorlib.dll::System::Enum::Enum_ToString_2
                                        (pEVar27,StringLiteral_d,(MethodInfo *)0x0);
                    pOVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__get_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pOVar23,
                                         (Object *)pSVar28,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
                    pOVar20 = pORam0000000182dc50a8;
                    if (pOVar33 == (Object *)0x0) goto code_?;
                    if ((pOVar33->klass->_0).element_class !=
                        (Il2CppClass *)
                        ((_union_155 *)&(pORam0000000182dc50a8->_0).element_class)->genericMethod)
                    goto code_?;
                    BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
                              (this_01,*(float *)&pOVar33[1].klass,
                               *(AccessorySlotType__Enum *)&object[1].klass,(MethodInfo *)0x0);
                    pBStackX_8 = (BodyAccessoriesController *)CONCAT62(pBStackX_8._2_6_,5);
                    pEVar27 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,
                                                    &pBStackX_8);
                    pSVar28 = mscorlib.dll::System::Enum::Enum_ToString_2
                                        (pEVar27,StringLiteral_d,(MethodInfo *)0x0);
                    pOVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__get_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pOVar23,
                                         (Object *)pSVar28,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
                    pOVar20 = pORam0000000182dc50a8;
                    if (pOVar33 == (Object *)0x0) goto code_?;
                    if ((pOVar33->klass->_0).element_class !=
                        (Il2CppClass *)
                        ((_union_155 *)&(pORam0000000182dc50a8->_0).element_class)->genericMethod)
                    goto code_?;
                    BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
                              (this_01,*(float *)&pOVar33[1].klass,
                               *(AccessorySlotType__Enum *)&object[1].klass,(MethodInfo *)0x0);
                  }
                }
              }
              else {
                if (((pOVar29 != (Object__Class *)0x0) && (url != (Object__Class *)0x0)) &&
                   (*(int *)&(pOVar29->_0).name == *(int *)&(url->_0).name)) {
                  pOVar20 = (Object__Class *)((longlong)*(int *)&(pOVar29->_0).name * 2);
                  bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                     ((uint8_t *)((longlong)&(pOVar29->_0).name + 4),
                                      (uint8_t *)((longlong)&(url->_0).name + 4),(uint64_t)pOVar20,
                                      (MethodInfo *)0x0);
                  if (bVar18 != 0) goto code_?;
                }
code_?:
                this_00 = (this_01->fields).accessoryLoader;
                this_05 = (UnityAction_1_System_Object_ *)
                          FUN_?(TypeInfo__System__Action<AvatarAccessory>);
                pOVar20 = (Object__Class *)
                          MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                ;
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                UnityAction_1_System_Object___ctor
                          (this_05,object,
                           MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                           ,(MethodInfo *)0x0);
                if (this_00 == (AccessoryLoader *)0x0) goto code_?;
                Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
                AccessoryLoader_LoadAccessory
                          (this_00,(String *)url,(Action_1_AvatarAccessory_ *)this_05,
                           (MethodInfo *)0x0);
              }
            } while( true );
          }
          goto code_?;
        }
        if (*(uint *)&(pDStack_2->fields)._entries <= (uint)uStack_3) goto code_?;
        pIVar34 = (pDStack_2->fields)._buckets;
        if (pIVar34 == (Int32__Array *)0x0) goto code_?;
        if ((uint)pIVar34->max_length <= (uint)uStack_3) goto code_?;
        key = pIVar34->vector[(int)(uint)uStack_3];
        uStack_4 = CONCAT44(uStack_4._4_4_,key);
        uStack_3 = CONCAT44(uStack_3._4_4_,(uint)uStack_3 + 1);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar32 = (this_01->fields).accessoryMap;
        if (pDVar32 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        pOVar20 = (Object__Class *)
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
        ;
        this_03 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar32,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            );
        if (this_03 == (AvatarAccessory *)0x0) goto code_?;
        this_04 = AvatarAccessory::AvatarAccessory_get_Transform(this_03,(MethodInfo *)0x0);
        if (this_04 == (Transform *)0x0) goto code_?;
        pOVar20 = (Object__Class *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_04,(Transform *)0x0,(MethodInfo *)0x0);
        pDVar32 = (this_01->fields).accessoryMap;
        if (pDVar32 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar32,key,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                  );
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_03,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  pOVar33 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar33,pOVar20);
code_?:
  pOVar33 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar33,pOVar20);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  pOVar29 = (Object__Class *)FUN_?();
code_?:
  FUN_?(pOVar29);
code_?:
  FUN_?();
code_?:
  FUN_?(pOVar20);
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

