
/* Dictionary`2[System.Object,System.Object] AdvancedGhostData() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
SharedWorldObjectValuesRepository_AdvancedGhostData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
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
    FUN_?(&StringLiteral_RespawnInterval);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_10[0] = 15000;
  value = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,
               (Object *)StringLiteral_RespawnInterval,value,CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    return (Dictionary_2_System_Object_System_Object_ *)this;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar1)();
  return pDVar2;
}


/* Dictionary`2[System.Object,System.Object] GetValues(WorldObjectType) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
SharedWorldObjectValuesRepository_GetValues
          (WorldObjectType__Enum worldObjectType,MethodInfo *method)

{
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
  if (*(int *)&(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository);
  }
  this = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
         TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->static_fields->values;
  if (this != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this,worldObjectType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      return (Dictionary_2_System_Object_System_Object_ *)pDVar2;
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository);
    }
    this_00 = TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->static_fields->values;
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_WorldObjectType_Dictionary_2_System_Object_System_Object_ *)0x0
       ) {
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,worldObjectType,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_MV__WorldObject__WorldObjectType_
                          );
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      value = (Single__Array__Class *)0x0;
      if (cRam_? == '\0') {
        FUN_?(&TypeRef__System__Byte);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Byte);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>
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
        FUN_?(&TypeRef__System__Int32);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Int32);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeRef__System__Single);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Single);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        FUN_?();
code_?:
        func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                           );
        pOVar4 = (Object *)func_?(&pOStack_5);
        FUN_?(pOVar4);
        pTVar6 = mscorlib.dll::System::Object::Object_GetType(pOVar4,(MethodInfo *)0x0);
        str0 = (String *)func_?(&StringLiteral_Type_not_handled_in_deepcopy_has);
        if (pTVar6 != (Type *)0x0) {
          FUN_?(pTVar6);
          unaff_R15 = (Int32__Array__Class *)func_?(3,pTVar6);
        }
        pIVar7 = (Int32__Array__Class *)
                  mscorlib.dll::System::String::String_Concat_4
                            (str0,(String *)unaff_R15,(MethodInfo *)0x0);
        uVar8 = func_?(&TypeInfo__System__ArgumentException);
        pIVar9 = (Int32__Array__Class *)func_?(uVar8);
        value = (Single__Array__Class *)0x0;
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1
                  ((InvalidEnumArgumentException *)pIVar9,(String *)pIVar7,(MethodInfo *)0x0);
        uVar8 = func_?(&
                                     MethodInfo__MV__WorldObject__HashtableFunctions__DeepCopyHashTable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                                    );
        FUN_?(pIVar9,uVar8);
code_?:
        FUN_?();
code_?:
        pIVar10 = pIVar7;
        FUN_?(value);
code_?:
        FUN_?();
code_?:
        FUN_?(pIVar10,unaff_RSI);
code_?:
        FUN_?(pIVar9,unaff_RSI);
code_?:
        uVar8 = FUN_?(pIVar10,pIVar9);
        pBVar11 = (Byte__Array__Class *)pIVar9;
code_?:
        FUN_?(uVar8,pBVar11);
        pIVar9 = (Int32__Array__Class *)pBVar11;
code_?:
        FUN_?();
code_?:
        FUN_?(pIVar10,unaff_RSI);
code_?:
        FUN_?(pIVar9,unaff_RSI);
code_?:
        uVar8 = FUN_?(pIVar10,pIVar9);
        pIVar12 = pIVar9;
code_?:
        FUN_?(uVar8,pIVar12);
        value = (Single__Array__Class *)pIVar12;
        pIVar7 = pIVar10;
code_?:
        FUN_?();
code_?:
        FUN_?();
        pIVar10 = pIVar7;
code_?:
        FUN_?(pIVar10,unaff_RSI);
code_?:
        FUN_?(value,unaff_RSI);
code_?:
        uVar8 = FUN_?(pIVar10,value);
        pSVar13 = value;
code_?:
        FUN_?(uVar8,pSVar13);
code_?:
        FUN_?();
        FUN_?();
        pcVar14 = (code *)swi(3);
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar14)();
        return pDVar3;
      }
      uStack_15 = 0;
      uStack_16 = 0;
      if (iRam_? != 0) {
        uVar17 = (uint)((ulonglong)&pDStack_18 >> 0xc);
        puVar19 = (ulonglong *)((ulonglong)((uVar17 & 0x1fffff) >> 6) * 8 + 0xADDR);
        value = (Single__Array__Class *)(ulonglong)(uVar17 & 0x3f);
        do {
          uVar20 = *puVar19;
          LOCK();
          uVar21 = *puVar19;
          if (uVar20 == uVar21) {
            *puVar19 = uVar20 | 1L << (longlong)value;
          }
          UNLOCK();
        } while (uVar20 != uVar21);
      }
      unaff_R15 = (Int32__Array__Class *)0x0;
      uStack_22 = (ulonglong)(uint)(pDVar3->fields)._version;
      uStack_23 = 2;
      DStack_24._version = (undefined4)uStack_22;
      DStack_24._index = uStack_22._4_4_;
      DStack_24._current.key = (Object *)0x0;
      DStack_24._current.value = (Object *)0x0;
      DStack_24._getEnumeratorRetType = 2;
      DStack_24._36_4_ = 0;
      pDStack_18 = pDVar3;
      DStack_24._dictionary = pDVar3;
code_?:
      bVar25 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_24,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      pIVar10 = (Int32__Array__Class *)DStack_24._current.value;
      pOVar4 = DStack_24._current.key;
      if (bVar25 == 0) {
        return (Dictionary_2_System_Object_System_Object_ *)pDVar2;
      }
      pOStack_5 = DStack_24._current.key;
      pIStack_26 = (Int32__Array__Class *)DStack_24._current.value;
      if ((Int32__Array__Class *)DStack_24._current.value == (Int32__Array__Class *)0x0)
      goto code_?;
      pIVar7 = (Int32__Array__Class *)
                FUN_?((longlong)((_union_86 *)&(DStack_24._current.value)->klass)->dummy +
                              0x20);
      pIVar27 = TypeRef__System__Single;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pIVar12 = unaff_R15;
      if (pIVar27 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar28 = FUN_?(pIVar27);
        pIVar12 = (Int32__Array__Class *)FUN_?(lVar28 + 0x20);
      }
      pSVar13 = TypeInfo__System__Single;
      pIVar27 = TypeRef__System__Int32;
      if (pIVar7 == pIVar12) {
        value = TypeInfo__System__Single;
        pIVar7 = pIVar10;
        if (pIVar10 == (Int32__Array__Class *)0x0) goto code_?;
        lVar28 = FUN_?(pIVar10,TypeInfo__System__Single);
        value = TypeInfo__System__Single;
        uVar8 = extraout_XMM0_Qa_01;
        if (lVar28 == 0) goto code_?;
        lVar28 = FUN_?(pIVar10,TypeInfo__System__Single);
        if (lVar28 == 0) goto code_?;
        iVar1 = *(int32_t *)(lVar28 + 0x18);
        value = (Single__Array__Class *)FUN_?(TypeInfo__System__Single,iVar1);
        unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Single;
        pIVar7 = unaff_R15;
        if ((value != (Single__Array__Class *)0x0) &&
           (pIVar7 = (Int32__Array__Class *)FUN_?(value,TypeInfo__System__Single),
           pIVar7 == (Int32__Array__Class *)0x0)) goto code_?;
        unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Single;
        pAVar29 = (Array *)FUN_?(pIVar10,TypeInfo__System__Single);
        if (pAVar29 == (Array *)0x0) goto code_?;
        in_R9 = (void *)0x0;
        mscorlib.dll::System::Array::Array_Copy_2(pAVar29,(Array *)pIVar7,iVar1,(MethodInfo *)0x0);
        pIVar7 = pIVar10;
      }
      else {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pIVar9 = (Int32__Array__Class *)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar27,(MethodInfo *)0x0);
        pIVar12 = TypeInfo__System__Int32;
        pIVar27 = TypeRef__System__Byte;
        pIVar30 = unaff_R15;
        if (pIVar7 == pIVar9) {
          pIVar9 = TypeInfo__System__Int32;
          if (pIVar10 == (Int32__Array__Class *)0x0) goto code_?;
          lVar28 = FUN_?(pIVar10,TypeInfo__System__Int32);
          pIVar9 = TypeInfo__System__Int32;
          uVar8 = extraout_XMM0_Qa_00;
          if (lVar28 == 0) goto code_?;
          lVar28 = FUN_?(pIVar10,TypeInfo__System__Int32);
          if (lVar28 == 0) goto code_?;
          iVar1 = *(int32_t *)(lVar28 + 0x18);
          pIVar9 = (Int32__Array__Class *)FUN_?(TypeInfo__System__Int32,iVar1);
          unaff_RSI = TypeInfo__System__Int32;
          if ((pIVar9 != (Int32__Array__Class *)0x0) &&
             (pIVar30 = (Int32__Array__Class *)FUN_?(pIVar9,TypeInfo__System__Int32),
             pIVar30 == (Int32__Array__Class *)0x0)) goto code_?;
          unaff_RSI = TypeInfo__System__Int32;
          pAVar29 = (Array *)FUN_?(pIVar10,TypeInfo__System__Int32);
          if (pAVar29 == (Array *)0x0) goto code_?;
        }
        else {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pIVar12 = (Int32__Array__Class *)
                    mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)pIVar27,(MethodInfo *)0x0);
          pBVar11 = TypeInfo__System__Byte;
          pIVar9 = (Int32__Array__Class *)
                    TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pIVar7 != pIVar12) {
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            pIVar12 = (Int32__Array__Class *)
                      mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)pIVar9,(MethodInfo *)0x0);
            if (pIVar7 == pIVar12) {
              pIVar12 = unaff_R15;
              if (pIVar10 != (Int32__Array__Class *)0x0) {
                in_R9 = ((_union_86 *)&((Object *)pIVar10)->klass)->dummy;
                bVar31 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
                value = (Single__Array__Class *)pIVar10;
                if (((*(byte *)((longlong)in_R9 + 0x130) < bVar31) ||
                    (*(Dictionary_2_System_Object_System_Object___Class **)
                      (*(longlong *)((longlong)in_R9 + 200) + -8 + (ulonglong)bVar31 * 8) !=
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    )) || (pIVar12 = pIVar10, pIVar10 == (Int32__Array__Class *)0x0))
                goto code_?;
              }
              value = (Single__Array__Class *)
                      HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
                                ((Dictionary_2_System_Object_System_Object_ *)pIVar12,
                                 (MethodInfo *)0x0);
              goto code_?;
            }
            if (pIVar7 == (Int32__Array__Class *)0x0) goto code_?;
            cVar32 = (**(code **)((longlong)((_union_86 *)&pIVar7->_0)->dummy + 0x5c8))(pIVar7);
            lVar28 = lRam_?;
            value = (Single__Array__Class *)pIVar10;
            if (cVar32 == '\0') {
              if (*(int *)(lRam_? + 0xe4) == 0) {
                FUN_?();
              }
              pIVar12 = (Int32__Array__Class *)
                        mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                  ((void *)(lVar28 + 0x20),(MethodInfo *)0x0);
              if (pIVar7 != pIVar12) goto code_?;
            }
            goto code_?;
          }
          pIVar9 = (Int32__Array__Class *)TypeInfo__System__Byte;
          if (pIVar10 == (Int32__Array__Class *)0x0) goto code_?;
          lVar28 = FUN_?(pIVar10,TypeInfo__System__Byte);
          pIVar9 = (Int32__Array__Class *)TypeInfo__System__Byte;
          uVar8 = extraout_XMM0_Qa;
          if (lVar28 == 0) goto code_?;
          lVar28 = FUN_?(pIVar10,TypeInfo__System__Byte);
          if (lVar28 == 0) goto code_?;
          iVar1 = *(int32_t *)(lVar28 + 0x18);
          pIVar9 = (Int32__Array__Class *)FUN_?(TypeInfo__System__Byte,iVar1);
          unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Byte;
          if ((pIVar9 != (Int32__Array__Class *)0x0) &&
             (pIVar30 = (Int32__Array__Class *)FUN_?(pIVar9,TypeInfo__System__Byte),
             pIVar30 == (Int32__Array__Class *)0x0)) goto code_?;
          unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Byte;
          pAVar29 = (Array *)FUN_?(pIVar10,TypeInfo__System__Byte);
          if (pAVar29 == (Array *)0x0) goto code_?;
        }
        in_R9 = (void *)0x0;
        mscorlib.dll::System::Array::Array_Copy_2(pAVar29,(Array *)pIVar30,iVar1,(MethodInfo *)0x0);
        value = (Single__Array__Class *)pIVar9;
        pIVar7 = pIVar10;
      }
code_?:
      if (pDVar2 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto code_?;
      in_R9 = (void *)CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,(Object *)value,
                 (InsertionBehavior__Enum)in_R9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      goto code_?;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar14)();
  return pDVar3;
}


/* Dictionary`2[System.Object,System.Object] SentryGun() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
SharedWorldObjectValuesRepository_SentryGun(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
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
    FUN_?(&StringLiteral_RespawnInterval);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_10[0] = 15000;
  value = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,
               (Object *)StringLiteral_RespawnInterval,value,CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    return (Dictionary_2_System_Object_System_Object_ *)this;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar1)();
  return pDVar2;
}


/* SharedWorldObjectValuesRepository() */

void MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
     SharedWorldObjectValuesRepository__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Dictionary__
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
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
    FUN_?(&StringLiteral_RespawnInterval);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_10[0] = 15000;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
    IVar3 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_RespawnInterval,pOVar2,IVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3d,(Object *)pDVar1,IVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ->klass->rgctx_data[0x22].method);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
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
        FUN_?(&StringLiteral_RespawnInterval);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      auStackX_10[0] = 15000;
      pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
        IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_RespawnInterval,pOVar2,IVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x30,(Object *)pDVar1,
                   CONCAT31((int3)(IVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ->klass->rgctx_data[0x22].method);
        TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->static_fields->values =
             (Dictionary_2_MV_WorldObject_WorldObjectType_Dictionary_2_System_Object_System_Object_
              *)this;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)
                         TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->static_fields
                        >> 0xc);
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
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

