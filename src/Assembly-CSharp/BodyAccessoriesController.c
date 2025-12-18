
/* Boolean AccessoryShouldBeSelecable(AvatarAccessory) */

bool Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_AccessoryShouldBeSelecable
               (BodyAccessoriesController *this,AvatarAccessory *accessory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__AvatarAccessoryBackAccessories);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__AvatarAccessoryHat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0;
  if ((this->fields).accessoryMoveOverride == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 == (GameSessionData *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    if ((pGVar2->fields).gameMode == 2) {
      if (accessory == (AvatarAccessory *)0x0) goto code_?;
      lVar5 = FUN_?(&(accessory->klass->_0).byval_arg);
      pIVar6 = TypeRef__AvatarAccessoryHat;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pIVar6 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar1 = FUN_?(pIVar6,1);
        lVar1 = FUN_?(lVar1 + 0x20);
      }
      if (lVar5 != lVar1) goto code_?;
    }
    bVar4 = 0;
  }
  else {
    if (accessory == (AvatarAccessory *)0x0) goto code_?;
    lVar5 = FUN_?(&(accessory->klass->_0).byval_arg);
    pIVar6 = TypeRef__AvatarAccessoryHat;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar7 = lVar1;
    if (pIVar6 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar7 = FUN_?(pIVar6,1);
      lVar7 = FUN_?(lVar7 + 0x20);
    }
    if (lVar5 != lVar7) {
      if ((this->fields).accessoryMoveOverride != 0) {
        if (accessory == (AvatarAccessory *)0x0) goto code_?;
        lVar5 = FUN_?(&(accessory->klass->_0).byval_arg);
        pIVar6 = TypeRef__AvatarAccessoryBackAccessories;
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar7 = lVar1;
        if (pIVar6 != (Il2CppType *)0x0) {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          lVar7 = FUN_?(pIVar6,1);
          lVar7 = FUN_?(lVar7 + 0x20);
        }
        if (lVar5 == lVar7) goto code_?;
      }
      goto code_?;
    }
code_?:
    bVar4 = 1;
  }
  return bVar4;
}


/* Void ApplyAccessoryOffset(Single, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
               (BodyAccessoriesController *this,float yOffset,AccessorySlotType__Enum slot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BodyAccessoriesController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
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
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__get_Item_MV__Common__AccessorySlotType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).accessoryMap;
  if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
  goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this_00,slot,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar1) {
    pDVar2 = (this->fields).accessoryMap;
    if ((pDVar2 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
       (pAVar3 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,slot,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            ), pAVar3 == (AvatarAccessory *)0x0)) goto code_?;
    pTVar4 = AvatarAccessory::AvatarAccessory_get_Transform(pAVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar5->zeroVector).x;
    uStack_6._4_4_ = (pVVar5->zeroVector).y;
    fVar7 = (pVVar5->zeroVector).z;
    if (*(int *)&(TypeInfo__BodyAccessoriesController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BodyAccessoriesController);
    }
    pMVar8 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__get_Item_MV__Common__AccessorySlotType_
    ;
    this_01 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset;
    if (this_01 == (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)0x0)
    goto code_?;
    uVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
             ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                       ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_01,slot,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__get_Item_MV__Common__AccessorySlotType_
                        ->klass->rgctx_data[0x21].method);
    if ((int)uVar9 < 0) {
      afStackX_18[0] = (float)slot;
      uVar10 = func_?(pMVar8->klass->rgctx_data,0xe);
      pOVar11 = (Object *)func_?(uVar10);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                (pOVar11,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pDVar13 = (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)
             (this_01->fields)._entries;
    if (pDVar13 == (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)0x0
       ) goto code_?;
    if ((uint)pDVar13->max_length <= uVar9) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar10._0_4_ = pDVar13->vector[(int)uVar9].value.x;
    uVar10._4_4_ = pDVar13->vector[(int)uVar9].value.y;
    fVar14 = pDVar13->vector[(int)uVar9].value.z;
    fVar15 = (float)uStack_6 + (float)(undefined4)uVar10;
    fVar16 = uStack_6._4_4_ + (float)uVar10._4_4_;
    if (cRam_? == '\0') {
      uStack_6 = uVar10;
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar5->upVector).x;
    uStack_6._4_4_ = (pVVar5->upVector).y;
    fVar7 = (pVVar5->upVector).z * yOffset + fVar7 + fVar14;
    if (pTVar4 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uStack_6 = CONCAT44(uStack_6._4_4_ * yOffset + fVar16,(float)uStack_6 * yOffset + fVar15);
    fStack_17 = fVar7;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar18 = (pTVar4->fields)._._.m_CachedPtr;
    if (pvVar18 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar18,&uStack_6);
    pDVar2 = (this->fields).accessoryMap;
    if ((pDVar2 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
       (pAVar3 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,slot,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            ), pAVar3 == (AvatarAccessory *)0x0)) goto code_?;
    pTVar4 = AvatarAccessory::AvatarAccessory_get_Transform(pAVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar19 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (pTVar4 == (Transform *)0x0) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    aRStack_20[0]._pointer._value = *(void **)&pQVar19->identityQuaternion;
    aRStack_20[0]._length = (int32_t)(pQVar19->identityQuaternion).z;
    aRStack_20[0]._12_4_ = (pQVar19->identityQuaternion).w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar18 = (pTVar4->fields)._._.m_CachedPtr;
    if (pvVar18 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar18,aRStack_20);
  }
  pDVar21 = (this->fields).accessoryData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_20[0]._pointer._value = (void *)0x0;
  aRStack_20[0]._length = 0;
  aRStack_20[0]._12_4_ = 0;
  pSVar22 = mscorlib.dll::System::Number::Number_FormatInt32
                      (slot,aRStack_20,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar21,(Object *)pSVar22,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    afStackX_18[0] = (float)CONCAT22(afStackX_18[0]._2_2_,3);
    this_02 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,afStackX_18);
    pSVar22 = mscorlib.dll::System::Enum::Enum_ToString_2(this_02,StringLiteral_d,(MethodInfo *)0x0)
    ;
    afStackX_18[0] = yOffset;
    pOVar11 = (Object *)FUN_?(uRam_?,afStackX_18);
    if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar23 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((bVar23 <= (pDVar21->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar21->klass->_1).typeHierarchy[(ulonglong)bVar23 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar21,(Object *)pSVar22,pOVar11,
                   (InsertionBehavior__Enum)
                   CONCAT71((int7)((ulonglong)
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
      FUN_?(pDVar21,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ApplySizeChange(Single, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
               (BodyAccessoriesController *this,float size,AccessorySlotType__Enum slot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
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
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).accessoryMap;
  if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
  goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this_00,slot,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar1) {
    pDVar2 = (this->fields).accessoryMap;
    if ((pDVar2 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,slot,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                           ), pOVar3 == (Object *)0x0)) goto code_?;
    *(float *)((longlong)&pOVar3[2].monitor + 4) = size;
    pDVar2 = (this->fields).accessoryMap;
    if ((pDVar2 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
       (this_01 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,slot,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            ), this_01 == (Component *)0x0)) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    (this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aRStack_4[0]._pointer._value =
         *(void **)&TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
    if (obj == (Transform *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    aRStack_4[0]._pointer._value =
         (void *)CONCAT44((float)((ulonglong)aRStack_4[0]._pointer._value >> 0x20) * size,
                          SUB84(aRStack_4[0]._pointer._value,0) * size);
    aRStack_4[0]._length =
         (int32_t)((TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z * size);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (obj->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar6,aRStack_4);
  }
  pDVar8 = (this->fields).accessoryData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_4[0]._pointer._value = (void *)0x0;
  aRStack_4[0]._length = 0;
  aRStack_4[0]._12_4_ = 0;
  pSVar9 = mscorlib.dll::System::Number::Number_FormatInt32
                     (slot,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar8,(Object *)pSVar9,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    afStackX_18[0] = (float)CONCAT22(afStackX_18[0]._2_2_,5);
    this_02 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,afStackX_18);
    pSVar9 = mscorlib.dll::System::Enum::Enum_ToString_2(this_02,StringLiteral_d,(MethodInfo *)0x0);
    afStackX_18[0] = size;
    pOVar3 = (Object *)FUN_?(uRam_?,afStackX_18);
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar10 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((bVar10 <= (pDVar8->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar8,(Object *)pSVar9,pOVar3,
                   (InsertionBehavior__Enum)
                   CONCAT71((int7)((ulonglong)
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
      FUN_?(pDVar8,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean AttachAccessory(AvatarAccessory, AccessorySlotType, Single, Single) */

bool Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_AttachAccessory
               (BodyAccessoriesController *this,AvatarAccessory *acc,AccessorySlotType__Enum slot,
               float offset,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Add_MV__Common__AccessorySlotType__AvatarAccessory_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Out_commented_return_false);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_add_accessory_a_second);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).accessoryMap;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,slot,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      this_01 = (this->fields).accessoryMap;
      if (this_01 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,slot,(Object *)acc,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Add_MV__Common__AccessorySlotType__AvatarAccessory_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Trying_to_add_accessory_a_second,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Out_commented_return_false,(MethodInfo *)0x0);
    }
    if (acc != (AvatarAccessory *)0x0) {
      pTVar2 = AvatarAccessory::AvatarAccessory_get_Transform(acc,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__BodyAccessoriesController);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pBVar3 = (this->fields).bodyData;
      if (*(int *)&(TypeInfo__BodyAccessoriesController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BodyAccessoriesController);
      }
      this_02 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap;
      if (((this_02 != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) &&
          (part = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,slot,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                            ), pBVar3 != (BodyData *)0x0)) &&
         (value = BodyData::BodyData_GetPartBone_1(pBVar3,part,(MethodInfo *)0x0),
         pTVar2 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar2,value,(MethodInfo *)0x0);
        BodyAccessoriesController_ApplyAccessoryOffset(this,offset,slot,(MethodInfo *)0x0);
        BodyAccessoriesController_ApplySizeChange(this,scale,slot,(MethodInfo *)0x0);
        pCVar4 = AvatarAccessory::AvatarAccessory_get_Colliders(acc,(MethodInfo *)0x0);
        uVar5 = 0;
        if (pCVar4 != (Collider__Array *)0x0) {
          ppCVar6 = pCVar4->vector;
          for (; (int)uVar5 < (int)pCVar4->max_length; uVar5 = uVar5 + 1) {
            if ((uint)pCVar4->max_length <= uVar5) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              bVar8 = (*pcVar7)();
              return bVar8;
            }
            obj = *ppCVar6;
            if (obj == (Collider *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar9 = (obj->fields)._._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              bVar8 = (*pcVar7)();
              return bVar8;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar7 = (code *)swi(3);
              bVar8 = (*pcVar7)();
              return bVar8;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(pvVar9);
            ppCVar6 = ppCVar6 + 1;
          }
          pTVar2 = AvatarAccessory::AvatarAccessory_get_Transform(acc,(MethodInfo *)0x0);
          pBVar3 = (this->fields).bodyData;
          if (pBVar3 != (BodyData *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar9 = (pBVar3->fields)._._._._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pBVar3,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              bVar8 = (*pcVar7)();
              return bVar8;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar7 = (code *)swi(3);
              bVar8 = (*pcVar7)();
              return bVar8;
            }
            pcRam_? = pcVar7;
            pvVar9 = (void *)(*pcRam_?)(pvVar9);
            obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                     Unmarshal_UnmarshalUnityObject
                               (pvVar9,
                                UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                               );
            if (obj_00 != (Object *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar11 = obj_00[1].klass;
              if (pOVar11 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                bVar8 = (*pcVar7)();
                return bVar8;
              }
              pcVar7 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar7 = (code *)swi(3);
                bVar8 = (*pcVar7)();
                return bVar8;
              }
              pcRam_? = pcVar7;
              iVar1 = (*pcRam_?)(pOVar11);
              LayerUtil::LayerUtil_SetLayerRecursively(pTVar2,iVar1,(MethodInfo *)0x0);
              AvatarAccessory::AvatarAccessory_set_Visible(acc,1,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar9 = (acc->fields)._._._._.m_CachedPtr;
              if (pvVar9 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)acc,(MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                bVar8 = (*pcVar7)();
                return bVar8;
              }
              pcVar7 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar7 = (code *)swi(3);
                bVar8 = (*pcVar7)();
                return bVar8;
              }
              pcRam_? = pcVar7;
              pvVar9 = (void *)(*pcRam_?)(pvVar9);
              this_03 = (GameObject *)
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar9,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                  );
              if (this_03 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (this_03,
                           FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                          );
                return 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void Destroy() */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_Destroy
               (BodyAccessoriesController *this,MethodInfo *method)

{
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
  if ((this->fields).accessoryLoader != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              ((this->fields).accessoryLoader,(MethodInfo *)0x0);
  }
  (this->fields).accessoryLoader = (AccessoryLoader *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).accessoryLoader >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if ((this->fields).accessoryMap !=
      (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    pDStack_6 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).accessoryMap;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    uStack_7 = (ulonglong)(uint)(pDStack_6->fields)._version;
    uStack_8 = 2;
    uStack_9 = 0;
    uStack_10 = 0;
    DStack_11._version = (undefined4)uStack_7;
    DStack_11._index = uStack_7._4_4_;
    DStack_11._current.key = 0;
    DStack_11._current._4_4_ = 0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    DStack_11._dictionary = pDStack_6;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (&DStack_11,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                             ), bVar12 != 0) {
      if ((Component *)DStack_11._current.value == (Component *)0x0) {
        FUN_?();
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)DStack_11._current.value,(MethodInfo *)0x0);
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
    (this->fields).accessoryMap = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(this->fields).accessoryMap >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    iVar14 = iRam_?;
    (this->fields).accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (iVar14 != 0) {
      uVar1 = (uint)((ulonglong)&(this->fields).accessoryData >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  return;
}


/* Void DestroyAccessory(AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_DestroyAccessory
               (BodyAccessoriesController *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
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
  pDVar1 = (this->fields).accessoryMap;
  if (((pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) &&
      (this_00 = (AvatarAccessory *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,slot,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                           ), this_00 != (AvatarAccessory *)0x0)) &&
     (this_01 = AvatarAccessory::AvatarAccessory_get_Transform(this_00,(MethodInfo *)0x0),
     this_01 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (this_01,(Transform *)0x0,(MethodInfo *)0x0);
    pDVar1 = (this->fields).accessoryMap;
    if (pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Remove
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,slot,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
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
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar3 = (void *)0x0;
      if (pGVar2 != (GameObject *)0x0) {
        pvVar3 = (pGVar2->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Single GetOffset(AccessorySlotType) */

float Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetOffset
                (BodyAccessoriesController *this,AccessorySlotType__Enum accessorySlot,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
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
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).accessoryData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_2[0]._pointer._value = (void *)0x0;
  aRStack_2[0]._length = 0;
  aRStack_2[0]._12_4_ = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (accessorySlot,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,(Object *)pSVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    auStackX_10[0] = 3;
    this_00 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_10);
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString_2(this_00,StringLiteral_d,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar1->klass->_1).naturalAligment < bVar4) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar1,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)pSVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar7 != (Object *)0x0) {
        if ((pOVar7->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          return *(float *)&pOVar7[1].klass;
        }
        FUN_?(pOVar7,lRam_?);
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float)(*pcVar5)();
  return fVar6;
}


/* Single GetScale(AccessorySlotType) */

float Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetScale
                (BodyAccessoriesController *this,AccessorySlotType__Enum accessorySlot,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
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
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).accessoryData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_2[0]._pointer._value = (void *)0x0;
  aRStack_2[0]._length = 0;
  aRStack_2[0]._12_4_ = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (accessorySlot,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,(Object *)pSVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    auStackX_10[0] = 5;
    this_00 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_10);
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString_2(this_00,StringLiteral_d,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar1->klass->_1).naturalAligment < bVar4) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar1,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)pSVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar7 != (Object *)0x0) {
        if ((pOVar7->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          return *(float *)&pOVar7[1].klass;
        }
        FUN_?(pOVar7,lRam_?);
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float)(*pcVar5)();
  return fVar6;
}


/* Vector3 GetSlotPosition(AccessorySlotType, Vector3) */

Vector3 * Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetSlotPosition
                    (Vector3 *__return_storage_ptr__,BodyAccessoriesController *this,
                    AccessorySlotType__Enum slot,Vector3 *offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AccessorySlotType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BodyAccessoriesController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Accessory__Failed_to_get_bone__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BodyAccessoriesController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BodyAccessoriesController);
  }
  this_00 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap;
  if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) {
    pSVar1 = (String *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,slot,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                        );
    this_01 = (this->fields).bodyData;
    if (this_01 == (BodyData *)0x0) goto DAT_?;
    this_02 = BodyData::BodyData_GetPartBone_1(this_01,pSVar1,(MethodInfo *)0x0);
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
    if (this_02 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((this_02->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
    }
    aAStackX_18[0] = slot;
    arg1 = (Object *)FUN_?(TypeInfo__MV__Common__AccessorySlotType,aAStackX_18);
    format = StringLiteral_Accessory__Failed_to_get_bone__0;
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_2,(Object *)pSVar1,arg1,(MethodInfo *)0x0);
    aPStack_3[0]._arg0 = PStack_2._arg0;
    aPStack_3[0]._arg1 = PStack_2._arg1;
    aPStack_3[0]._arg2 = PStack_2._arg2;
    aPStack_3[0]._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,format,aPStack_3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar1,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
code_?:
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_4 = 0;
      fStack_5 = 0.0;
      pvVar6 = (this_02->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this_02,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pVVar8 = (Vector3 *)(*pcVar7)();
        return pVVar8;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        pVVar8 = (Vector3 *)(*pcVar7)();
        return pVVar8;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6,&uStack_4);
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (aVStack_10,this_02,(MethodInfo *)0x0);
      uVar11 = pVVar8->x;
      uVar12 = pVVar8->y;
      fVar13 = pVVar8->z;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (aVStack_10,this_02,(MethodInfo *)0x0);
      uVar14 = pVVar8->x;
      uVar15 = pVVar8->y;
      fVar16 = pVVar8->z;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (aVStack_10,this_02,(MethodInfo *)0x0);
      uVar17 = pVVar8->x;
      fVar18 = offset->x;
      fVar19 = offset->x;
      fVar20 = offset->y;
      fVar21 = pVVar8->y;
      fVar22 = offset->z;
      fVar23 = offset->y;
      fVar24 = pVVar8->z;
      fVar25 = offset->z;
      __return_storage_ptr__->x =
           (float)uVar11 * offset->x + (float)uStack_4 + (float)uVar14 * offset->y +
           (float)uVar17 * offset->z;
      __return_storage_ptr__->y =
           (float)uVar12 * fVar18 + uStack_4._4_4_ + (float)uVar15 * fVar20 + fVar21 * fVar22;
      __return_storage_ptr__->z = fVar13 * fVar19 + fStack_5 + fVar16 * fVar23 + fVar24 * fVar25;
      return __return_storage_ptr__;
    }
  }
DAT_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Transform GetSlotTransform(AccessorySlotType) */

Transform *
Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetSlotTransform
          (BodyAccessoriesController *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BodyAccessoriesController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).bodyData;
  if (*(int *)&(TypeInfo__BodyAccessoriesController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BodyAccessoriesController);
  }
  this_00 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap;
  if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) {
    key = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,slot,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                    );
    if (pBVar1 != (BodyData *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                      ,key,0,in_R9,unaff_RDI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (pBVar1->fields).partMap;
      pTVar2 = (pBVar1->fields).PartBones;
      if (this_01 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
        IVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                          ((Dictionary_2_System_Object_System_Int32Enum_ *)this_01,key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                          );
        if (pTVar2 != (Transform__Array *)0x0) {
          if (IVar3 < (Int32Enum__Enum)pTVar2->max_length) {
            return pTVar2->vector[(int)IVar3];
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          pTVar5 = (Transform *)(*pcVar4)();
          return pTVar5;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      pTVar5 = (Transform *)(*pcVar4)();
      return pTVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pTVar5 = (Transform *)(*pcVar4)();
  return pTVar5;
}


/* Boolean IsAccessoryEquipped(Int32) */

bool Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_IsAccessoryEquipped
               (BodyAccessoriesController *this,int32_t streamingAssetId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
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
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).accessoryData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    bVar1 = 0;
  }
  else {
    pDStack_2 = (this->fields).accessoryData;
    uStack_3 = 0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_2 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    uStack_9 = (ulonglong)(uint)(pDStack_2->fields)._version;
    uStack_10 = 2;
    DStack_11._version = (undefined4)uStack_9;
    DStack_11._index = uStack_9._4_4_;
    DStack_11._current.key = (Object *)0x0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    DStack_11._dictionary = pDStack_2;
    do {
      bVar1 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_11,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      this_00 = DStack_11._current.value;
      if (bVar1 == 0) goto code_?;
      auStackX_8[0] = 1;
      this_01 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_8);
      lVar12 = 0;
      key = mscorlib.dll::System::Enum::Enum_ToString_2(this_01,StringLiteral_d,(MethodInfo *)0x0);
      if ((Dictionary_2_System_Object_System_Object___Class *)this_00 ==
          (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)FUN_?();
code_?:
        FUN_?(pDVar13,lVar12);
        pDVar14 = pDVar13;
code_?:
        FUN_?();
code_?:
        FUN_?(this_00,pDVar14);
        FUN_?();
        pcVar15 = (code *)swi(3);
        bVar1 = (*pcVar15)();
        return bVar1;
      }
      pIVar16 = ((Il2CppClass_0 *)&this_00->klass)->image;
      bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDVar14 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)&pIVar16[4].assembly < bVar17) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           ((longlong)pIVar16[2].codeGenModule + (ulonglong)bVar17 * 8 + -8) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      pDVar14 = (Dictionary_2_System_Object_System_Object___Class *)this_00;
      pDVar13 = (Dictionary_2_System_Object_System_Object___Class *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar13 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
      goto code_?;
      pIVar16 = (pDVar13->_0).image;
      lVar18._0_4_ = pIVar16->token;
      lVar18._4_1_ = pIVar16->dynamic;
      lVar18._5_3_ = *(undefined3 *)&pIVar16->field_0x45;
      lVar12 = lRam_?;
      if (lVar18 != *(longlong *)(lRam_? + 0x40)) goto code_?;
    } while (*(int *)&(pDVar13->_0).name != streamingAssetId);
    bVar1 = 1;
  }
  return bVar1;
}


/* Boolean IsAccessoryInWoData(AvatarAccessory) */

bool Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
               (BodyAccessoriesController *this,AvatarAccessory *avatarAccessory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).accessoryData;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)FUN_?();
code_?:
    FUN_?(pDVar2,method);
    pDVar3 = pDVar2;
code_?:
    FUN_?();
code_?:
    FUN_?(this,pDVar3);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_4 = (pDVar1->fields)._dictionary;
    ppDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    if (pDStack_4 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_8 = pDStack_4;
      FUN_?();
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    ppDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_4->fields)._version << 0x20);
    uStack_6 = 0;
    uStack_14 = (ulonglong)ppDStack_5;
    apDStack_15[0] = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    pDStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_5 = &pDStack_4;
    while (pDStack_4 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) {
      if (uStack_14._4_4_ != (pDStack_4->fields)._version) goto code_?;
      method = (MethodInfo *)(uStack_14 & 0xffffffff);
      do {
        if (pDStack_4 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        uVar7 = (uint)method;
        if ((uint)(pDStack_4->fields)._count <= uVar7) {
          return 0;
        }
        pDVar16 = (pDStack_4->fields)._entries;
        method = (MethodInfo *)(ulonglong)(uVar7 + 1);
        uStack_14 = CONCAT44(uStack_14._4_4_,uVar7 + 1);
        if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar16->max_length <= uVar7) goto code_?;
      } while ((&pDVar16->vector[0].hashCode)[(longlong)(int)uVar7 * 6] < 0);
      apDStack_15[0] =
           *(Dictionary_2_System_Object_System_Object___Class **)
            ((longlong)&pDVar16->vector[0].key + (longlong)(int)uVar7 * 0x18 + 8);
      func_?(apDStack_15);
      this = (BodyAccessoriesController *)apDStack_15[0];
      auStackX_8[0] = 4;
      this_01 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_8);
      method = (MethodInfo *)0x0;
      key = mscorlib.dll::System::Enum::Enum_ToString_2(this_01,StringLiteral_d,(MethodInfo *)0x0);
      if ((Dictionary_2_System_Object_System_Object___Class *)this ==
          (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      pIVar17 = (((Dictionary_2_System_Object_System_Object___Class *)this)->_0).image;
      bVar18 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)&pIVar17[4].assembly < bVar18) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           ((longlong)pIVar17[2].codeGenModule + (ulonglong)bVar18 * 8 + -8) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      pDVar3 = (Dictionary_2_System_Object_System_Object___Class *)this;
      pDVar2 = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (avatarAccessory == (AvatarAccessory *)0x0) goto code_?;
      pDVar3 = (Dictionary_2_System_Object_System_Object___Class *)
                (avatarAccessory->fields)._AssetPath_k__BackingField;
      pDVar19 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pDVar2 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((MethodInfo *)(pDVar2->_0).image == pMRam0000000182dc50c0) {
          pDVar19 = pDVar2;
        }
        method = pMRam0000000182dc50c0;
        if (pDVar19 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      if ((pDVar19 == pDVar3) ||
         ((((pDVar19 != (Dictionary_2_System_Object_System_Object___Class *)0x0 &&
            (pDVar3 != (Dictionary_2_System_Object_System_Object___Class *)0x0)) &&
           (*(int *)&(pDVar19->_0).name == *(int *)&(pDVar3->_0).name)) &&
          (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)((longlong)&(pDVar19->_0).name + 4),
                              (uint8_t *)((longlong)&(pDVar3->_0).name + 4),
                              (longlong)*(int *)&(pDVar19->_0).name * 2,(MethodInfo *)0x0),
          bVar13 != 0)))) {
        return 1;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Boolean IsAccessorySlotOccupied(AccessorySlotType) */

bool Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_IsAccessorySlotOccupied
               (BodyAccessoriesController *this,AccessorySlotType__Enum accessorySlotType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).accessoryData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_1[0]._pointer._value = (void *)0x0;
  aRStack_1[0]._length = 0;
  aRStack_1[0]._12_4_ = 0;
  key = mscorlib.dll::System::Number::Number_FormatInt32
                  (accessorySlotType,aRStack_1,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar2 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void LoadedAccessoryCallback(AvatarAccessory, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_LoadedAccessoryCallback
               (BodyAccessoriesController *this,AvatarAccessory *accessory,
               AccessorySlotType__Enum slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_load_accessory_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (accessory != (AvatarAccessory *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((accessory->fields)._._._._.m_CachedPtr != (void *)0x0) {
      uStack_1 = (AvatarAccessory *)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
      pDVar2 = (this->fields).accessoryData;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      RStack_3._pointer._value =
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0;
      RStack_3._length = 0;
      RStack_3._12_4_ = 0;
      pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                          (slot,&RStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,(Object *)pSVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar5 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar2->klass->_1).naturalAligment < bVar5) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar2);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        auStackX_10[0] = 4;
        pEVar7 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_10);
        pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                            (pEVar7,StringLiteral_d,(MethodInfo *)0x0);
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pSVar8 = (String *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar2,(Object *)pSVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          pSVar4 = (String *)0x0;
          if (pSVar8 != (String *)0x0) {
            if (pSVar8->klass == pSRam0000000182dc50c0) {
              pSVar4 = pSVar8;
            }
            if (pSVar4 == (String *)0x0) {
              FUN_?(pSVar8,pSRam0000000182dc50c0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pSVar8 = (accessory->fields)._AssetPath_k__BackingField;
          if (pSVar8 != (String *)0x0) {
            bVar9 = mscorlib.dll::System::String::String_Contains(pSVar8,pSVar4,(MethodInfo *)0x0)
            ;
            if (bVar9 == 0) {
Assembly_CSharp_dll_BodyAccessoriesController_BodyAccessoriesController_UpdateAccessoryVisibility:
              bVar9 = (this->fields).accessoriesVisible;
              auStackX_10[0] = CONCAT11(auStackX_10[0]._1_1_,bVar9);
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Values__
                              ,bVar9,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pDVar10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)(this->fields).accessoryMap;
              if ((pDVar10 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)0x0) ||
                 (pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                      (pDVar10,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Values__
                                      ),
                 pDVar11 ==
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
                FUN_?();
code_?:
                FUN_?();
code_?:
                FUN_?();
                uVar12 = RStack_3._length;
code_?:
                RStack_3._length = uVar12;
                FUN_?();
code_?:
                FUN_?();
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                          ((MethodInfo *)0x0);
              }
              else {
                pDVar10 = (pDVar11->fields)._dictionary;
                if (iRam_? != 0) {
                  uVar12 = (uint)((ulonglong)&pDStackY_40 >> 0xc);
                  puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar14 = *puVar13;
                    LOCK();
                    uVar15 = *puVar13;
                    if (uVar14 == uVar15) {
                      *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar14 != uVar15);
                }
                if (pDVar10 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)0x0) {
                  pDStackY_40 = pDVar10;
                  FUN_?();
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                RStack_3._12_4_ = (pDVar10->fields)._version;
                RStack_3._length = 0;
                uStack_1 = (AvatarAccessory *)0x0;
                pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)0x0;
                RStack_3._pointer._value = pDVar10;
                while (RStack_3._pointer._value !=
                       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0) {
                  if (RStack_3._12_4_ != *(int32_t *)((longlong)RStack_3._pointer._value + 0x2c))
                  goto code_?;
                  do {
                    if (RStack_3._pointer._value ==
                        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) goto code_?;
                    if ((uint)*(int32_t *)((longlong)RStack_3._pointer._value + 0x20) <=
                        (uint)RStack_3._length) {
                      (this->fields).accessoriesVisible = bVar9;
                      return;
                    }
                    pDVar16 = *(Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                               **)((longlong)RStack_3._pointer._value + 0x18);
                    lVar17 = (longlong)RStack_3._length;
                    uVar12 = RStack_3._length + 1;
                    if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                   *)0x0) goto code_?;
                    bVar18 = (uint)pDVar16->max_length <= (uint)RStack_3._length;
                    RStack_3._length = uVar12;
                    if (bVar18) goto code_?;
                  } while ((&pDVar16->vector[0].hashCode)[lVar17 * 6] < 0);
                  uStack_1 = *(AvatarAccessory **)
                               ((longlong)&pDVar16->vector[0].key + lVar17 * 0x18 + 8);
                  func_?(&uStack_1);
                  if (uStack_1 == (AvatarAccessory *)0x0) goto code_?;
                  AvatarAccessory::AvatarAccessory_set_Visible(uStack_1,bVar9,(MethodInfo *)0x0);
                }
              }
              FUN_?();
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            auStackX_10[0] = 3;
            pEVar7 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_10);
            pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                                (pEVar7,StringLiteral_d,(MethodInfo *)0x0);
            pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (pDVar2,(Object *)pSVar4,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (pOVar19 != (Object *)0x0) {
              if ((pOVar19->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar19,lRam_?);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              offset = *(float *)&pOVar19[1].klass;
              auStackX_10[0] = 5;
              pEVar7 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_10)
              ;
              pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                                  (pEVar7,StringLiteral_d,(MethodInfo *)0x0);
              pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                  (pDVar2,(Object *)pSVar4,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
              if (pOVar19 != (Object *)0x0) {
                if ((pOVar19->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar19,lRam_?);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                bVar9 = BodyAccessoriesController_AttachAccessory
                                  (this,accessory,slot,offset,*(float *)&pOVar19[1].klass,
                                   (MethodInfo *)0x0);
                if (((bVar9 != 0) &&
                    (bVar9 = BodyAccessoriesController_AccessoryShouldBeSelecable
                                       (this,accessory,(MethodInfo *)0x0), bVar9 != 0)) &&
                   ((this->fields).accessoryMoveOverride != 0)) {
                  BodyAccessoriesController_MakeAccessorySelectable
                            (this,accessory,slot,(MethodInfo *)0x0);
                }
                goto 
                Assembly_CSharp_dll_BodyAccessoriesController_BodyAccessoriesController_UpdateAccessoryVisibility
                ;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar4 = StringLiteral_Failed_to_load_accessory_;
  if (cRam_? == '\0') {
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?();
  }
  pIVar20 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar20 == (ILogger_1 *)0x0) {
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uStack_1 = (AvatarAccessory *)pSVar4;
  pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)&UNK_?;
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar20,0);
  return;
}


/* Void MakeAccessorySelectable(AvatarAccessory, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_MakeAccessorySelectable
               (BodyAccessoriesController *this,AvatarAccessory *accessory,
               AccessorySlotType__Enum accessorySlot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AccessorySlotType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
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
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionHelperAvatarAccessory>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SelectionHelper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hidden);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = (Object *)0x0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  uVar2 = 0xffffffff;
  uStack_3 = 0xffffffff;
  if ((this->fields).accessoryData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDStack_4 = (this->fields).accessoryData;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_4 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    uStack_10 = (ulonglong)(uint)(pDStack_4->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    uStack_13 = 0;
    DStack_1._version = (undefined4)uStack_10;
    DStack_1._index = uStack_10._4_4_;
    DStack_1._current.key = (Object *)0x0;
    DStack_1._current.value = (Object *)0x0;
    DStack_1._getEnumeratorRetType = 2;
    DStack_1._36_4_ = 0;
    uStack_14 = 0;
    pDStack_15 = &DStack_1;
    DStack_1._dictionary = pDStack_4;
code_?:
    bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
             ::Object,System::Object]::
             Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                       (&DStack_1,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                       );
    if (bVar16 != 0) {
      this_00 = (AccessorySlotType__Enum__Class *)0x0;
      if ((AccessorySlotType__Enum__Class *)DStack_1._current.value !=
          (AccessorySlotType__Enum__Class *)0x0) {
        pIVar17 = ((Il2CppClass_0 *)&(DStack_1._current.value)->klass)->image;
        bVar18 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        pAVar19 = (AccessorySlotType__Enum__Class *)DStack_1._current.value;
        if (((*(byte *)&pIVar17[4].assembly < bVar18) ||
            (*(Dictionary_2_System_Object_System_Object___Class **)
              ((longlong)pIVar17[2].codeGenModule + (ulonglong)bVar18 * 8 + -8) !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
           (this_00 = (AccessorySlotType__Enum__Class *)DStack_1._current.value,
           (AccessorySlotType__Enum__Class *)DStack_1._current.value ==
           (AccessorySlotType__Enum__Class *)0x0)) goto code_?;
      }
      auStack_20[0] = 2;
      pEVar21 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStack_20);
      pAVar19 = (AccessorySlotType__Enum__Class *)0x0;
      pSVar22 = mscorlib.dll::System::Enum::Enum_ToString_2
                          (pEVar21,StringLiteral_d,(MethodInfo *)0x0);
      if (this_00 != (AccessorySlotType__Enum__Class *)0x0) {
        pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar22,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pAVar19 = TypeInfo__MV__Common__AccessorySlotType;
        if (pOVar23 != (Object *)0x0) {
          if ((pOVar23->klass->_0).element_class ==
              (TypeInfo__MV__Common__AccessorySlotType->_0).element_class)
          goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  pTVar24 = (Transform *)0x0;
  if (((accessory != (AvatarAccessory *)0x0) &&
      (pTVar25 = AvatarAccessory::AvatarAccessory_get_Transform(accessory,(MethodInfo *)0x0),
      pTVar25 != (Transform *)0x0)) &&
     (pGVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar25,(MethodInfo *)0x0),
     pMVar27 = 
     UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
     , pGVar26 != (GameObject *)0x0)) {
    if ((
        UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    }
    p_Stack_c0 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_4
                           (pGVar26,0,((pMVar27->field7_0x38).rgctx_data)->method);
    uStack_3 = 0;
    pTVar25 = pTVar24;
    pTVar28 = pTVar24;
    if (p_Stack_c0 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      while( true ) {
        if ((int)p_Stack_c0->max_length <= (int)(uint)pTVar25) {
          return;
        }
        pTStack_29 = pTVar28;
        if ((uint)p_Stack_c0->max_length <= (uint)pTVar25) {
          FUN_?();
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pOVar23 = (Object *)p_Stack_c0->vector[(longlong)pTVar28];
        pGVar26 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
        pSVar22 = StringLiteral_SelectionHelper;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
                  (pGVar26,pSVar22,(MethodInfo *)0x0);
        if (pGVar26 == (GameObject *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar31 = (pGVar26->fields)._.m_CachedPtr;
        if (pvVar31 == (void *)0x0) {
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar26,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        pvVar31 = (void *)(*pcRam_?)(pvVar31);
        pTVar25 = (Transform *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar31,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        if (pOVar23 == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar33 = pOVar23[1].klass;
        if (pOVar33 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        pvVar31 = (void *)(*pcRam_?)(pOVar33);
        pOVar34 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar31,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                            );
        if (pOVar34 == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar33 = pOVar34[1].klass;
        if (pOVar33 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar34,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        pvVar31 = (void *)(*pcRam_?)(pOVar33);
        pTVar28 = (Transform *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar31,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        if (pTVar25 == (Transform *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__RectTransform);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Parent_of_RectTransform_is_being);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pTVar35 = pTVar24;
        if (pTVar25->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar35 = pTVar25;
        }
        if (pTVar35 != (Transform *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                    ((Object *)StringLiteral_Parent_of_RectTransform_is_being,(Object_1 *)pTVar25,
                     (MethodInfo *)0x0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar25,pTVar28,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar31 = (pGVar26->fields)._.m_CachedPtr;
        if (pvVar31 == (void *)0x0) goto code_?;
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        pvVar31 = (void *)(*pcRam_?)(pvVar31);
        pOVar34 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar31,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar36 = TypeInfo__UnityEngine__Vector3->static_fields;
        if (pOVar34 == (Object *)0x0) {
          FUN_?();
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        uStack_37._0_4_ = (pVVar36->zeroVector).x;
        uStack_37._4_4_ = (pVVar36->zeroVector).y;
        fStack_38 = (pVVar36->zeroVector).z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar33 = pOVar34[1].klass;
        if (pOVar33 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar34,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        (*pcRam_?)(pOVar33);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar31 = (pGVar26->fields)._.m_CachedPtr;
        if (pvVar31 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar26,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        pvVar31 = (void *)(*pcRam_?)(pvVar31);
        pOVar34 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar31,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pQVar39 = TypeInfo__UnityEngine__Quaternion->static_fields;
        if (pOVar34 == (Object *)0x0) {
          FUN_?();
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        fStack_40 = (pQVar39->identityQuaternion).x;
        fStack_41 = (pQVar39->identityQuaternion).y;
        fStack_42 = (pQVar39->identityQuaternion).z;
        fStack_43 = (pQVar39->identityQuaternion).w;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar33 = pOVar34[1].klass;
        if (pOVar33 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar34,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        (*pcRam_?)(pOVar33);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar31 = (pGVar26->fields)._.m_CachedPtr;
        if (pvVar31 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar26,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        pvVar31 = (void *)(*pcRam_?)(pvVar31);
        pOVar34 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar31,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar36 = TypeInfo__UnityEngine__Vector3->static_fields;
        if (pOVar34 == (Object *)0x0) {
code_?:
          FUN_?();
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        uStack_14._0_4_ = (pVVar36->oneVector).x;
        uStack_14._4_4_ = (pVVar36->oneVector).y;
        pDStack_15 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                     CONCAT44(pDStack_15._4_4_,(pVVar36->oneVector).z);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar33 = pOVar34[1].klass;
        if (pOVar33 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar34,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        (*pcRam_?)(pOVar33,&uStack_14);
        pOVar34 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar26,
                             UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                            );
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MeshFilter>_UnityEngine__MeshFilter_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Mesh_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Mesh>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar33 = pOVar23[1].klass;
        if (pOVar33 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        pvVar31 = (void *)(*pcRam_?)(pOVar33);
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject
                  (pvVar31,
                   UnityEngine__Mesh_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Mesh>_void__
                  );
        if (pOVar34 == (Object *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MeshCollider>_UnityEngine__MeshCollider_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Mesh>_UnityEngine__Mesh_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar33 = pOVar34[1].klass;
        if (pOVar33 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar34,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Mesh>_UnityEngine__Mesh_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        (*pcRam_?)(pOVar33);
        iVar44 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Hidden,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar31 = (pGVar26->fields)._.m_CachedPtr;
        if (pvVar31 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar26,(MethodInfo *)0x0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcVar30 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
          uVar32 = func_?(&UNK_?);
          FUN_?(uVar32,0);
          pcVar30 = (code *)swi(3);
          (*pcVar30)();
          return;
        }
        pcRam_? = pcVar30;
        (*pcRam_?)(pvVar31,iVar44);
        pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar26,
                             SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionHelperAvatarAccessory>__
                            );
        iVar44 = (this->fields).bodyWoId;
        if (pOVar23 == (Object *)0x0) goto code_?;
        pOVar23[2].klass = (Object__Class *)accessory;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)(pOVar23 + 2) >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        *(AccessorySlotType__Enum *)&pOVar23[2].monitor = accessorySlot;
        *(int32_t *)((longlong)&pOVar23[2].monitor + 4) = iVar44;
        *(uint *)&pOVar23[3].klass = uVar2;
        uStack_3 = uStack_3 + 1;
        pTVar25 = (Transform *)(ulonglong)uStack_3;
        pTVar28 = (Transform *)((longlong)&pTStack_29->klass + 1);
      }
    }
  }
  FUN_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
code_?:
  if (accessorySlot == *(AccessorySlotType__Enum *)&pOVar23[1].klass) {
    auStack_20[0] = 1;
    pEVar21 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStack_20);
    pSVar22 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar21,StringLiteral_d,(MethodInfo *)0x0)
    ;
    pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar22,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    pAVar19 = pARam0000000182dc5078;
    if (pOVar23 != (Object *)0x0) {
      if ((pOVar23->klass->_0).element_class == (pARam0000000182dc5078->_0).element_class) {
        uVar2 = *(uint *)&pOVar23[1].klass;
        uStack_3 = uVar2;
        goto code_?;
      }
      FUN_?(pOVar23,pARam0000000182dc5078);
    }
    pOVar23 = (Object *)FUN_?();
code_?:
    FUN_?(pOVar23,pAVar19);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?(pAVar19);
    FUN_?();
    pcVar30 = (code *)swi(3);
    (*pcVar30)();
    return;
  }
  goto code_?;
}


/* Void RefreshAccessories(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
               (BodyAccessoriesController *this,
               Dictionary_2_System_Object_System_Object_ *accessoryData,MethodInfo *method)

{
  pBStackX_8 = this;
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
  pDStack_1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  DStack_4._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_4._version = 0;
  DStack_4._index = 0;
  DStack_4._current.key = (Object *)0x0;
  DStack_4._current.value = (Object *)0x0;
  DStack_4._getEnumeratorRetType = 0;
  DStack_4._36_4_ = 0;
  pOVar5 = (Object__Class *)0x0;
  aiStackX_10[0] = 0;
  (this->fields).accessoryData = accessoryData;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).accessoryData >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__);
  pDVar11 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).accessoryMap;
  pDStackX_20 = this_01;
  if (pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&RStack_12 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    RStack_12._length = (pDVar11->fields)._version;
    RStack_12._12_4_ = 0;
    uStack_13 = 2;
    uStack_14 = 0;
    uStack_15 = 0;
    aDStack_16[0]._version = RStack_12._length;
    aDStack_16[0]._index = 0;
    aDStack_16[0]._current.key = 0;
    aDStack_16[0]._current._4_4_ = 0;
    aDStack_16[0]._current.value = (Object *)0x0;
    aDStack_16[0]._getEnumeratorRetType = 2;
    aDStack_16[0]._36_4_ = 0;
    RStack_12._pointer._value = pDVar11;
    aDStack_16[0]._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar11;
    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (aDStack_16,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                              ), uVar18 = aDStack_16[0]._current._0_8_, bVar17 != 0) {
      pOVar19 = (Object__Class *)0x0;
      bVar17 = BodyAccessoriesController_IsAccessoryInWoData
                         (this,(AvatarAccessory *)aDStack_16[0]._current.value,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          FUN_?();
          FUN_?();
          goto code_?;
        }
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__Add
                  ((List_1_System_UInt32Enum_ *)this_01,(UInt32Enum__Enum)uVar18,
                   MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                  );
      }
    }
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&RStack_12 >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      RStack_12._8_8_ =
           (ulonglong)(uint)*(int32_t *)((longlong)&(this_01->fields)._entries + 4) << 0x20;
      uStack_14 = 0;
      uStack_2 = RStack_12._8_8_;
      uStack_3 = 0;
      RStack_12._pointer._value = this_01;
      pDStack_1 = this_01;
      while (pOVar19 = (Object__Class *)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
            , pDStack_1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (uStack_2._4_4_ != *(int32_t *)((longlong)&(pDStack_1->fields)._entries + 4)) {
code_?:
          if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
               ->klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (pDStack_1 == (Dictionary_2_System_Object_System_Object_ *)0x0)
          goto code_?;
          if (uStack_2._4_4_ != *(int32_t *)((longlong)&(pDStack_1->fields)._entries + 4))
          goto code_?;
          uStack_2 = CONCAT44(uStack_2._4_4_,*(int *)&(pDStack_1->fields)._entries + 1);
          uStack_3 = uStack_3 & 0xffffffff00000000;
          pDVar11 = (this->fields).accessoryData;
          if (pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            if (iRam_? != 0) {
              uVar6 = (uint)((ulonglong)&RStack_12 >> 0xc);
              uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
              do {
                uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            RStack_12._length = (pDVar11->fields)._version;
            RStack_12._12_4_ = 0;
            uStack_13 = 2;
            uStack_14 = 0;
            uStack_15 = 0;
            DStack_4._version = RStack_12._length;
            DStack_4._index = 0;
            DStack_4._current.key = (Object *)0x0;
            DStack_4._current.value = (Object *)0x0;
            DStack_4._getEnumeratorRetType = 2;
            DStack_4._36_4_ = 0;
            uStack_20 = 0;
            pDStack_21 = &DStack_4;
            RStack_12._pointer._value = pDVar11;
            DStack_4._dictionary = pDVar11;
            do {
              while( true ) {
                bVar17 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                         Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                   (&DStack_4,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                   );
                pOVar19 = (Object__Class *)DStack_4._current.value;
                if (bVar17 == 0) {
                  return;
                }
                aiStackX_10[0] = -1;
                pOVar22 = pOVar5;
                if ((Object__Class *)DStack_4._current.key != (Object__Class *)0x0) {
                  if (((Il2CppClass_0 *)&(DStack_4._current.key)->klass)->image ==
                      pIRam0000000182dc50c0) {
                    pOVar22 = (Object__Class *)DStack_4._current.key;
                  }
                  if (pOVar22 == (Object__Class *)0x0) goto code_?;
                }
                if (cRam_? == '\0') {
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pOVar22 != (Object__Class *)0x0) break;
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
              uStack_23 = (ulonglong)*(uint *)&(pOVar22->_0).name;
              info = mscorlib.dll::System::Globalization::NumberFormatInfo::
                     NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                FUN_?();
              }
              RStack_12._8_8_ = uStack_23;
              RStack_12._pointer._value = (undefined1 *)((longlong)&(pOVar22->_0).name + 4);
              bVar17 = mscorlib.dll::System::Number::Number_TryParseInt32
                                 (&RStack_12,NumberStyles__Enum_Integer,info,aiStackX_10,
                                  (MethodInfo *)0x0);
              if (bVar17 == 0) goto code_?;
              object = (Object *)
                       FUN_?(TypeInfo__BodyAccessoriesController____c__DisplayClass25_0);
              if (object == (Object *)0x0) goto code_?;
              object[1].monitor = (MonitorData *)this;
              func_?(&object[1].monitor);
              *(int32_t *)&object[1].klass = aiStackX_10[0];
              pOVar22 = pOVar5;
              if (pOVar19 != (Object__Class *)0x0) {
                pIVar24 = ((Il2CppClass_0 *)&((Object *)pOVar19)->klass)->image;
                bVar25 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
                if (((bVar25 <= *(byte *)&pIVar24[4].assembly) &&
                    (*(Dictionary_2_System_Object_System_Object___Class **)
                      ((longlong)pIVar24[2].codeGenModule + (ulonglong)bVar25 * 8 + -8) ==
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    )) && (pOVar22 = pOVar19, pOVar19 != (Object__Class *)0x0))
                goto code_?;
                goto code_?;
              }
code_?:
              pBStackX_8 = (BodyAccessoriesController *)CONCAT62(pBStackX_8._2_6_,4);
              pEVar26 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,&pBStackX_8)
              ;
              pOVar19 = (Object__Class *)0x0;
              pSVar27 = mscorlib.dll::System::Enum::Enum_ToString_2
                                  (pEVar26,StringLiteral_d,(MethodInfo *)0x0);
              if (pOVar22 == (Object__Class *)0x0) goto code_?;
              pOVar19 = (Object__Class *)
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              ;
              pOVar28 = (Object__Class *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                  ((Dictionary_2_System_Object_System_Object_ *)pOVar22,
                                   (Object *)pSVar27,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
              url = pOVar5;
              if (pOVar28 != (Object__Class *)0x0) {
                if ((pOVar28->_0).image == pIRam0000000182dc50c0) {
                  url = pOVar28;
                }
                if (url != (Object__Class *)0x0) goto code_?;
                goto code_?;
              }
code_?:
              pDVar29 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                       (this->fields).accessoryMap;
              if (pDVar29 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
              goto code_?;
              pOVar19 = (Object__Class *)
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                        ->klass->rgctx_data[0x21].method;
              iVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,UnityEngine::Vector3]::
                       Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                 (pDVar29,*(Int32Enum__Enum *)&object[1].klass,(MethodInfo *)pOVar19)
              ;
              if (iVar30 < 0) goto code_?;
              pDVar31 = (this->fields).accessoryMap;
              if (pDVar31 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
              goto code_?;
              pOVar19 = (Object__Class *)
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
              ;
              pOVar32 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar31,
                                   *(Int32Enum__Enum *)&object[1].klass,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                  );
              if (pOVar32 == (Object *)0x0) goto code_?;
              pOVar28 = pOVar32[2].klass;
              if (pOVar28 == url) {
code_?:
                pDVar29 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                         (this->fields).accessoryMap;
                if (pDVar29 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
                goto code_?;
                pOVar19 = (Object__Class *)
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                          ->klass->rgctx_data[0x21].method;
                iVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,UnityEngine::Vector3]::
                         Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                   (pDVar29,*(Int32Enum__Enum *)&object[1].klass,
                                    (MethodInfo *)pOVar19);
                if (-1 < iVar30) {
                  pDVar31 = (this->fields).accessoryMap;
                  if (pDVar31 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
                  goto code_?;
                  pOVar19 = (Object__Class *)
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                  ;
                  pOVar32 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar31,
                                       *(Int32Enum__Enum *)&object[1].klass,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                      );
                  if (pOVar32 == (Object *)0x0) goto code_?;
                  pOVar19 = pOVar32[2].klass;
                  if ((pOVar19 == url) ||
                     (((pOVar19 != (Object__Class *)0x0 && (url != (Object__Class *)0x0)) &&
                      ((*(int *)&(pOVar19->_0).name == *(int *)&(url->_0).name &&
                       (bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                           ((uint8_t *)((longlong)&(pOVar19->_0).name + 4),
                                            (uint8_t *)((longlong)&(url->_0).name + 4),
                                            (longlong)*(int *)&(pOVar19->_0).name * 2,
                                            (MethodInfo *)0x0), bVar17 != 0)))))) {
                    pBStackX_8 = (BodyAccessoriesController *)CONCAT62(pBStackX_8._2_6_,3);
                    pEVar26 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,
                                                    &pBStackX_8);
                    pSVar27 = mscorlib.dll::System::Enum::Enum_ToString_2
                                        (pEVar26,StringLiteral_d,(MethodInfo *)0x0);
                    pOVar32 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__get_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pOVar22,
                                         (Object *)pSVar27,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
                    pOVar19 = pORam0000000182dc50a8;
                    if (pOVar32 == (Object *)0x0) goto code_?;
                    if ((pOVar32->klass->_0).element_class !=
                        (Il2CppClass *)
                        ((_union_155 *)&(pORam0000000182dc50a8->_0).element_class)->genericMethod)
                    goto code_?;
                    BodyAccessoriesController_ApplyAccessoryOffset
                              (this,*(float *)&pOVar32[1].klass,
                               *(AccessorySlotType__Enum *)&object[1].klass,(MethodInfo *)0x0);
                    pBStackX_8 = (BodyAccessoriesController *)CONCAT62(pBStackX_8._2_6_,5);
                    pEVar26 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,
                                                    &pBStackX_8);
                    pSVar27 = mscorlib.dll::System::Enum::Enum_ToString_2
                                        (pEVar26,StringLiteral_d,(MethodInfo *)0x0);
                    pOVar32 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__get_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)pOVar22,
                                         (Object *)pSVar27,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
                    pOVar19 = pORam0000000182dc50a8;
                    if (pOVar32 == (Object *)0x0) goto code_?;
                    if ((pOVar32->klass->_0).element_class !=
                        (Il2CppClass *)
                        ((_union_155 *)&(pORam0000000182dc50a8->_0).element_class)->genericMethod)
                    goto code_?;
                    BodyAccessoriesController_ApplySizeChange
                              (this,*(float *)&pOVar32[1].klass,
                               *(AccessorySlotType__Enum *)&object[1].klass,(MethodInfo *)0x0);
                  }
                }
              }
              else {
                if (((pOVar28 != (Object__Class *)0x0) && (url != (Object__Class *)0x0)) &&
                   (*(int *)&(pOVar28->_0).name == *(int *)&(url->_0).name)) {
                  pOVar19 = (Object__Class *)((longlong)*(int *)&(pOVar28->_0).name * 2);
                  bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                     ((uint8_t *)((longlong)&(pOVar28->_0).name + 4),
                                      (uint8_t *)((longlong)&(url->_0).name + 4),(uint64_t)pOVar19,
                                      (MethodInfo *)0x0);
                  if (bVar17 != 0) goto code_?;
                }
code_?:
                this_00 = (this->fields).accessoryLoader;
                this_04 = (UnityAction_1_System_Object_ *)
                          FUN_?(TypeInfo__System__Action<AvatarAccessory>);
                pOVar19 = (Object__Class *)
                          MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                ;
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                UnityAction_1_System_Object___ctor
                          (this_04,object,
                           MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                           ,(MethodInfo *)0x0);
                if (this_00 == (AccessoryLoader *)0x0) goto code_?;
                Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
                AccessoryLoader_LoadAccessory
                          (this_00,(String *)url,(Action_1_AvatarAccessory_ *)this_04,
                           (MethodInfo *)0x0);
              }
            } while( true );
          }
          goto code_?;
        }
        if (*(uint *)&(pDStack_1->fields)._entries <= (uint)uStack_2) goto code_?;
        pUVar33 = (UInt32Enum__Enum__Array *)(pDStack_1->fields)._buckets;
        if (pUVar33 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
        if ((uint)pUVar33->max_length <= (uint)uStack_2) goto code_?;
        key = pUVar33->vector[(int)(uint)uStack_2];
        uStack_3 = CONCAT44(uStack_3._4_4_,key);
        uStack_2 = CONCAT44(uStack_2._4_4_,(uint)uStack_2 + 1);
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
        pDVar31 = (this->fields).accessoryMap;
        if (pDVar31 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        pOVar19 = (Object__Class *)
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
        ;
        this_02 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar31,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            );
        if (this_02 == (AvatarAccessory *)0x0) goto code_?;
        this_03 = AvatarAccessory::AvatarAccessory_get_Transform(this_02,(MethodInfo *)0x0);
        if (this_03 == (Transform *)0x0) goto code_?;
        pOVar19 = (Object__Class *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_03,(Transform *)0x0,(MethodInfo *)0x0);
        pDVar31 = (this->fields).accessoryMap;
        if (pDVar31 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar31,key,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                  );
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_02,(MethodInfo *)0x0);
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
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
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
  pOVar32 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar32,pOVar19);
code_?:
  pOVar32 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar32,pOVar19);
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
  pOVar28 = (Object__Class *)FUN_?();
code_?:
  FUN_?(pOVar28);
code_?:
  FUN_?();
code_?:
  FUN_?(pOVar19);
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Void UpdateAccessoryVisibility(Boolean) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_UpdateAccessoryVisibility
               (BodyAccessoriesController *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).accessoryMap;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar2 = uStack_3;
code_?:
    uStack_3 = uVar2;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_4 = (pDVar1->fields)._dictionary;
    puStack_5 = (undefined4 *)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (uStack_4 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iStack_11 = (uStack_4->fields)._version;
    uStack_6 = 0;
    uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
    uStack_12 = (undefined4)uStack_4;
    uStack_13 = uStack_4._4_4_;
    uStack_3 = 0;
    apAStack_14[0] = (AvatarAccessory *)0x0;
    uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_5 = &uStack_12;
    while (lVar15 = CONCAT44(uStack_13,uStack_12), lVar15 != 0) {
      if (iStack_11 != *(int *)(lVar15 + 0x2c)) goto code_?;
      do {
        if (lVar15 == 0) goto code_?;
        if (*(uint *)(lVar15 + 0x20) <= uStack_3) {
          (this->fields).accessoriesVisible = visible;
          return;
        }
        lVar16 = *(longlong *)(lVar15 + 0x18);
        lVar17 = (longlong)(int)uStack_3;
        uVar2 = uStack_3 + 1;
        if (lVar16 == 0) goto code_?;
        bVar18 = *(uint *)(lVar16 + 0x18) <= uStack_3;
        uStack_3 = uVar2;
        if (bVar18) goto code_?;
      } while (*(int *)(lVar16 + 0x20 + lVar17 * 0x18) < 0);
      apAStack_14[0] = *(AvatarAccessory **)(lVar16 + (lVar17 + 2) * 0x18);
      func_?(apAStack_14);
      if (apAStack_14[0] == (AvatarAccessory *)0x0) goto code_?;
      AvatarAccessory::AvatarAccessory_set_Visible(apAStack_14[0],visible,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateOffset(AccessorySlotType, Single) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_UpdateOffset
               (BodyAccessoriesController *this,AccessorySlotType__Enum slot,float offset,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BodyAccessoriesController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
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
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__get_Item_MV__Common__AccessorySlotType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).accessoryMap;
  if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
  goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this_00,slot,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar1) {
    pDVar2 = (this->fields).accessoryMap;
    if ((pDVar2 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
       (pAVar3 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,slot,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            ), pAVar3 == (AvatarAccessory *)0x0)) goto code_?;
    pTVar4 = AvatarAccessory::AvatarAccessory_get_Transform(pAVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar5->zeroVector).x;
    uStack_6._4_4_ = (pVVar5->zeroVector).y;
    fVar7 = (pVVar5->zeroVector).z;
    if (*(int *)&(TypeInfo__BodyAccessoriesController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BodyAccessoriesController);
    }
    pMVar8 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__get_Item_MV__Common__AccessorySlotType_
    ;
    this_01 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset;
    if (this_01 == (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)0x0)
    goto code_?;
    uVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
             ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                       ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_01,slot,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__get_Item_MV__Common__AccessorySlotType_
                        ->klass->rgctx_data[0x21].method);
    if ((int)uVar9 < 0) {
      afStackX_18[0] = (float)slot;
      uVar10 = func_?(pMVar8->klass->rgctx_data,0xe);
      pOVar11 = (Object *)func_?(uVar10);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                (pOVar11,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pDVar13 = (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)
             (this_01->fields)._entries;
    if (pDVar13 == (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)0x0
       ) goto code_?;
    if ((uint)pDVar13->max_length <= uVar9) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar10._0_4_ = pDVar13->vector[(int)uVar9].value.x;
    uVar10._4_4_ = pDVar13->vector[(int)uVar9].value.y;
    fVar14 = pDVar13->vector[(int)uVar9].value.z;
    fVar15 = (float)uStack_6 + (float)(undefined4)uVar10;
    fVar16 = uStack_6._4_4_ + (float)uVar10._4_4_;
    if (cRam_? == '\0') {
      uStack_6 = uVar10;
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar5->upVector).x;
    uStack_6._4_4_ = (pVVar5->upVector).y;
    fVar7 = (pVVar5->upVector).z * offset + fVar7 + fVar14;
    if (pTVar4 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uStack_6 = CONCAT44(uStack_6._4_4_ * offset + fVar16,(float)uStack_6 * offset + fVar15);
    fStack_17 = fVar7;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar18 = (pTVar4->fields)._._.m_CachedPtr;
    if (pvVar18 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar18,&uStack_6);
    pDVar2 = (this->fields).accessoryMap;
    if ((pDVar2 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
       (pAVar3 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,slot,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            ), pAVar3 == (AvatarAccessory *)0x0)) goto code_?;
    pTVar4 = AvatarAccessory::AvatarAccessory_get_Transform(pAVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar19 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (pTVar4 == (Transform *)0x0) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    aRStack_20[0]._pointer._value = *(void **)&pQVar19->identityQuaternion;
    aRStack_20[0]._length = (int32_t)(pQVar19->identityQuaternion).z;
    aRStack_20[0]._12_4_ = (pQVar19->identityQuaternion).w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar18 = (pTVar4->fields)._._.m_CachedPtr;
    if (pvVar18 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar18,aRStack_20);
  }
  pDVar21 = (this->fields).accessoryData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_20[0]._pointer._value = (void *)0x0;
  aRStack_20[0]._length = 0;
  aRStack_20[0]._12_4_ = 0;
  pSVar22 = mscorlib.dll::System::Number::Number_FormatInt32
                      (slot,aRStack_20,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar21,(Object *)pSVar22,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    afStackX_18[0] = (float)CONCAT22(afStackX_18[0]._2_2_,3);
    this_02 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,afStackX_18);
    pSVar22 = mscorlib.dll::System::Enum::Enum_ToString_2(this_02,StringLiteral_d,(MethodInfo *)0x0)
    ;
    afStackX_18[0] = offset;
    pOVar11 = (Object *)FUN_?(uRam_?,afStackX_18);
    if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar23 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((bVar23 <= (pDVar21->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar21->klass->_1).typeHierarchy[(ulonglong)bVar23 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar21,(Object *)pSVar22,pOVar11,
                   (InsertionBehavior__Enum)
                   CONCAT71((int7)((ulonglong)
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
      FUN_?(pDVar21,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateScale(AccessorySlotType, Single) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_UpdateScale
               (BodyAccessoriesController *this,AccessorySlotType__Enum slot,float scale,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
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
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).accessoryMap;
  if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
  goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this_00,slot,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar1) {
    pDVar2 = (this->fields).accessoryMap;
    if ((pDVar2 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,slot,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                           ), pOVar3 == (Object *)0x0)) goto code_?;
    *(float *)((longlong)&pOVar3[2].monitor + 4) = scale;
    pDVar2 = (this->fields).accessoryMap;
    if ((pDVar2 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
       (this_01 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,slot,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            ), this_01 == (Component *)0x0)) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    (this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aRStack_4[0]._pointer._value =
         *(void **)&TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
    if (obj == (Transform *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    aRStack_4[0]._pointer._value =
         (void *)CONCAT44((float)((ulonglong)aRStack_4[0]._pointer._value >> 0x20) * scale,
                          SUB84(aRStack_4[0]._pointer._value,0) * scale);
    aRStack_4[0]._length =
         (int32_t)((TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z * scale);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (obj->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar6,aRStack_4);
  }
  pDVar8 = (this->fields).accessoryData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_4[0]._pointer._value = (void *)0x0;
  aRStack_4[0]._length = 0;
  aRStack_4[0]._12_4_ = 0;
  pSVar9 = mscorlib.dll::System::Number::Number_FormatInt32
                     (slot,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar8,(Object *)pSVar9,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    afStackX_18[0] = (float)CONCAT22(afStackX_18[0]._2_2_,5);
    this_02 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,afStackX_18);
    pSVar9 = mscorlib.dll::System::Enum::Enum_ToString_2(this_02,StringLiteral_d,(MethodInfo *)0x0);
    afStackX_18[0] = scale;
    pOVar3 = (Object *)FUN_?(uRam_?,afStackX_18);
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar10 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((bVar10 <= (pDVar8->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar8,(Object *)pSVar9,pOVar3,
                   (InsertionBehavior__Enum)
                   CONCAT71((int7)((ulonglong)
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
      FUN_?(pDVar8,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* BodyAccessoriesController() */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BodyAccessoriesController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Torso);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Head);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Dictionary__
            );
  if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    IVar1 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,(Object *)StringLiteral_Torso,
               IVar1,MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
                     ->klass->rgctx_data[0x22].method);
    IVar1 = CONCAT31((int3)(IVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,(Object *)StringLiteral_Head,
               IVar1,MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
                     ->klass->rgctx_data[0x22].method);
    IVar1 = CONCAT31((int3)(IVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)StringLiteral_Torso,
               IVar1,MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
                     ->klass->rgctx_data[0x22].method);
    bVar2 = iRam_? != 0;
    TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap =
         (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)this;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)TypeInfo__BodyAccessoriesController->static_fields >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    this_00 = (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>
                           );
    pEVar7 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
             EqualityComparer_1_System_Int32Enum__get_Default
                       (MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Dictionary__
                        ->klass->rgctx_data->method->klass->rgctx_data[3].method);
    if ((pEVar7 != (EqualityComparer_1_System_Int32Enum_ *)0x0) &&
       (bVar2 = iRam_? != 0,
       (this_00->fields)._comparer = (IEqualityComparer_1_MV_Common_AccessorySlotType_ *)0x0, bVar2)
       ) {
      uVar3 = (uint)((ulonglong)&(this_00->fields)._comparer >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)0x0) {
      aVStack_8[0].z = _UNK_?;
      IVar1 = CONCAT31((int3)(IVar1 >> 8),2);
      aVStack_8[0]._0_8_ = (ulonglong)_UNK_? << 0x20;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
      Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__TryInsert
                ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_00,1,aVStack_8,IVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                 ->klass->rgctx_data[0x22].method);
      aVStack_8[0].z = 0.0;
      IVar1 = CONCAT31((int3)(IVar1 >> 8),2);
      aVStack_8[0].x = 0.0;
      aVStack_8[0].y = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
      Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__TryInsert
                ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_00,2,aVStack_8,IVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                 ->klass->rgctx_data[0x22].method);
      aVStack_8[0].z = _UNK_?;
      aVStack_8[0]._0_8_ = (ulonglong)_UNK_? << 0x20;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
      Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__TryInsert
                ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_00,3,aVStack_8,
                 CONCAT31((int3)(IVar1 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                 ->klass->rgctx_data[0x22].method);
      TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset = this_00;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)
                       &TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* BodyAccessoriesController(Int32, BodyData, Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController__ctor
               (BodyAccessoriesController *this,int32_t bodyWoId,BodyData *bodyData,
               Dictionary_2_System_Object_System_Object_ *accessoryData,bool isVisible,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).accessoryMap = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)this_00
  ;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).accessoryMap >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (AccessoryLoader *)
            FUN_?(
                         TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                         );
  Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
            (this_01,(MethodInfo *)0x0);
  iVar6 = iRam_?;
  (this->fields).accessoryLoader = this_01;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).accessoryLoader >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).bodyWoId = bodyWoId;
  (this->fields).bodyData = bodyData;
  iVar7 = 0;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).bodyData >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).accessoryData = accessoryData;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).accessoryData >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).accessoriesVisible = isVisible;
  return;
}


/* Void set_AccessoryMoveOverride(Boolean) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_set_AccessoryMoveOverride
               (BodyAccessoriesController *this,bool value,MethodInfo *method)

{
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
                  SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
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
  DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = 0;
  DStack_1._current._4_4_ = 0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  (this->fields).accessoryMoveOverride = value;
  if (value == 0) {
    this_00 = (this->fields).bodyData;
    if ((this_00 != (BodyData *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      p_Var6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_4
                         (pGVar2,1,
                          SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                         );
      uVar3 = 0;
      if (p_Var6 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var8 = p_Var6->vector;
        while( true ) {
          if ((int)p_Var6->max_length <= (int)uVar3) {
            return;
          }
          if ((uint)p_Var6->max_length <= uVar3) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((Component *)*pp_Var8 == (Component *)0x0) break;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)*pp_Var8,(MethodInfo *)0x0);
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
                    ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
          uVar3 = uVar3 + 1;
          pp_Var8 = pp_Var8 + 1;
        }
      }
    }
  }
  else {
    pDStack_5 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).accessoryMap;
    if (pDStack_5 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pDStack_5 >> 0xc);
        uVar6 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      uStack_10 = (ulonglong)(uint)(pDStack_5->fields)._version;
      uStack_11 = 2;
      uStack_12 = 0;
      uStack_13 = 0;
      DStack_1._version = (undefined4)uStack_10;
      DStack_1._index = uStack_10._4_4_;
      DStack_1._current.key = 0;
      DStack_1._current._4_4_ = 0;
      DStack_1._current.value = (Object *)0x0;
      DStack_1._getEnumeratorRetType = 2;
      DStack_1._36_4_ = 0;
      DStack_1._dictionary = pDStack_5;
      while (bVar14 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_1,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                               ), bVar14 != 0) {
        BodyAccessoriesController_MakeAccessorySelectable
                  (this,(AvatarAccessory *)DStack_1._current.value,DStack_1._current.key,
                   (MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

