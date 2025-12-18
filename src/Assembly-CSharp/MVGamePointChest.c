
/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Clone
          (MVGamePointChest *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar2->fields)._GameCoinManager_k__BackingField,
     this_00 == (MVGameCoinManager *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pMVar4 = (MVWorldObjectClient *)(*pcVar3)();
    return pMVar4;
  }
  MVGameCoinManager::MVGameCoinManager_Evaluate(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
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
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_is_a_hack_created_for_spawn);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar5 = (Object *)(*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  pDVar6 = (Dictionary_2_System_Object_System_Object_ *)
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      (pOVar5,(MethodInfo *)0x0);
  pDVar7 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar6->klass->_1).naturalAligment < bVar8) ||
       (pDVar7 = pDVar6,
       (Dictionary_2_System_Object_System_Object___Class *)
       (pDVar6->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar6);
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVWorldObjectClient *)(*pcVar3)();
      return pMVar4;
    }
  }
  bVar9 = iRam_? != 0;
  (this->fields)._._._._.runTimeData = pDVar7;
  if (bVar9) {
    uVar10 = (uint)((ulonglong)&(this->fields)._._._._.runTimeData >> 0xc);
    lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
    do {
      uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
      puVar13 = (ulonglong *)(lVar11 + 0xADDR);
      LOCK();
      bVar9 = uVar12 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pDVar6 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
            MVWorldObject_DeepCopyWorldObjectDataParameters((MVWorldObject *)this,(MethodInfo *)0x0)
  ;
  pIVar14 = (this->klass->vtable).set_RunTimeData.methodPtr;
  (*pIVar14)(this,(this->fields)._._._._.runTimeData,(this->klass->vtable).set_RunTimeData.method);
  pWVar15 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
  pDVar7 = (Dictionary_2_System_Object_System_Object_ *)(unaff_RBX & 0xffffffffffffff00);
  iVar16._0_2_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.attrs;
  iVar16._2_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.type;
  iVar16._3_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.field_0xb;
  if ((iVar16 < 0) &&
     (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).generic_class ==
       (Il2CppGenericClass *)0x0 ||
      (pDVar7 = (Dictionary_2_System_Object_System_Object_ *)0x0,
      ((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_1).field_0x6d & 8) == 0)))) {
    pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    FUN_?(&pDVar7->fields,&stack0x00000008,
                  (longlong)(int)(pWVar15->_1).instance_size + -0x10);
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&pDVar7->fields >> 0xc);
      lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar13 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  if ((cloneBookkeeping != (CloneBookkeeping *)0x0) &&
     (pOVar5 = (Object *)FUN_?(uRam_?,&stack0x00000008),
     pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    uVar17 = CONCAT71((int7)((ulonglong)pIVar14 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar6,(Object *)pDVar7,pOVar5,(InsertionBehavior__Enum)uVar17,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pOVar5 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0x00000008);
    pOVar18 = (Object *)FUN_?(uRam_?,&stack0x00000008);
    uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar6,pOVar5,pOVar18,(InsertionBehavior__Enum)uVar17,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (((this->fields)._._._._.ownerActorNr == -1) && (ownerActorNumber == 0)) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_This_is_a_hack_created_for_spawn,(MethodInfo *)0x0);
      pOVar5 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0x00000008)
      ;
    }
    else {
      pOVar5 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0x00000008)
      ;
    }
    pOVar18 = (Object *)FUN_?(uRam_?,&stack0x00000008);
    uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar6,pOVar5,pOVar18,(InsertionBehavior__Enum)uVar17,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pOVar5 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0x00000008);
    pOVar18 = (Object *)FUN_?(uRam_?,&stack0x00000008);
    uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar6,pOVar5,pOVar18,(InsertionBehavior__Enum)uVar17,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pOVar5 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0x00000008);
    pOVar18 = (Object *)FUN_?(uRam_?,&stack0x00000008);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar6,pOVar5,pOVar18,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar17 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar17 = 0;
    pMVar4 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                        (pDVar6,worldObjects,prototypes,(MethodInfo *)0x0);
    if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
       (this_01 = (cloneBookkeeping->fields).worldObjectIdsMaps,
       this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__TryInsert
                (this_01,(this->fields)._._._._.id,(pMVar4->fields)._.id,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar17 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                 klass->rgctx_data[0x22].method);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
          (pWVar19 = (pMVar2->fields).worldNetwork, pWVar19 != (WorldNetwork *)0x0)) &&
         (this_02 = (pWVar19->fields)._.worldObjectClientManager,
         this_02 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_AddToWorldObjects
                  (this_02,pMVar4,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
                  ((MVWorldObject *)this,(cloneBookkeeping->fields).linkIds,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetObjectLinksForClone
                  ((MVWorldObject *)this,(cloneBookkeeping->fields).objectLinkIds,(MethodInfo *)0x0)
        ;
        (cloneBookkeeping->fields).cloneIdIncrement =
             (cloneBookkeeping->fields).cloneIdIncrement + 1;
        return pMVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClient *)(*pcVar3)();
  return pMVar4;
}


/* MVWorldObject DeepCopy() */

MVWorldObject *
Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_DeepCopy
          (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    LStack_1._current = (Object *)&UNK_?;
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 == (MVGameControllerBase *)0x0) ||
      (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar3->fields)._GameCoinManager_k__BackingField,
     this_00 == (MVGameCoinManager *)0x0)) {
    LStack_1._current = (Object *)&UNK_?;
    FUN_?();
    pcVar4 = (code *)swi(3);
    pMVar5 = (MVWorldObject *)(*pcVar4)();
    return pMVar5;
  }
  LStack_1._current = (Object *)&UNK_?;
  MVGameCoinManager::MVGameCoinManager_Evaluate(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Link);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = (MVWorldObject *)
            (*(this->klass->vtable).ShallowCopy.methodPtr)
                      (this,(this->klass->vtable).ShallowCopy.method);
  pLVar6 = (List_1_MV_WorldObject_Link_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  if (pMVar5 != (MVWorldObject *)0x0) {
    (pMVar5->fields).outputLinkRefs = pLVar6;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pMVar5->fields).outputLinkRefs >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pLVar6 = (this->fields)._._._._.outputLinkRefs;
    if (pLVar6 != (List_1_MV_WorldObject_Link_ *)0x0) {
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&uStack_12 >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar6->fields)._version << 0x20);
      uStack_14 = 0;
      LStack_1._8_8_ = pLStack_13;
      LStack_1._current = (Object *)0x0;
      uStack_12 = 0;
      pLStack_13 = &LStack_1;
      LStack_1._list = (List_1_System_Object_ *)pLVar6;
      while (bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_1,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                                ), bVar15 != 0) {
        pLVar6 = (pMVar5->fields).outputLinkRefs;
        if (LStack_1._current == (Object *)0x0) goto code_?;
        uVar16 = *(undefined4 *)&LStack_1._current[1].klass;
        uVar17 = *(undefined4 *)&LStack_1._current[1].monitor;
        uVar18 = *(undefined1 *)((longlong)&LStack_1._current[1].monitor + 4);
        pOVar19 = (Object *)FUN_?(TypeInfo__MV__WorldObject__Link);
        *(undefined4 *)&pOVar19[1].klass = uVar16;
        *(undefined4 *)((longlong)&pOVar19[1].klass + 4) = uVar17;
        *(undefined4 *)&pOVar19[1].monitor = uVar17;
        *(undefined1 *)((longlong)&pOVar19[1].monitor + 4) = uVar18;
        pMVar20 = 
        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
        ;
        if (pLVar6 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
        piVar21 = &(pLVar6->fields)._version;
        *piVar21 = *piVar21 + 1;
        pLVar22 = (pLVar6->fields)._items;
        uVar7 = (pLVar6->fields)._size;
        if (pLVar22 == (Link__Array *)0x0) goto code_?;
        if (uVar7 < (uint)pLVar22->max_length) {
          (pLVar6->fields)._size = uVar7 + 1;
          FUN_?();
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar6,pOVar19,pMVar20->klass->rgctx_data[0xe].method
                    );
        }
      }
      pLVar6 = (List_1_MV_WorldObject_Link_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
      (pMVar5->fields).inputLinkRefs = pLVar6;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pMVar5->fields).inputLinkRefs >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pLVar6 = (this->fields)._._._._.inputLinkRefs;
      if (pLVar6 != (List_1_MV_WorldObject_Link_ *)0x0) {
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&uStack_12 >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pLStack_13 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)(uint)(pLVar6->fields)._version << 0x20);
        uStack_14 = 0;
        LStack_1._8_8_ = pLStack_13;
        LStack_1._current = (Object *)0x0;
        uStack_12 = 0;
        pLStack_13 = &LStack_1;
        LStack_1._list = (List_1_System_Object_ *)pLVar6;
        while( true ) {
          bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                             );
          if (bVar15 == 0) {
            pDVar23 = (this->fields)._._._._.data;
            if (cRam_? == '\0') {
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
              cRam_? = '\x01';
            }
            pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (pDVar24,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pDVar23 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                      HashtableFunctions_DeepCopyHashTable
                                (pDVar23,(Dictionary_2_System_Object_System_Object_ *)pDVar24,
                                 (MethodInfo *)0x0);
            (pMVar5->fields).data = pDVar23;
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&(pMVar5->fields).data >> 0xc);
              lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
              do {
                uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
                puVar10 = (ulonglong *)(lVar8 + 0xADDR);
                LOCK();
                bVar11 = uVar9 == *puVar10;
                if (bVar11) {
                  *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            pDVar23 = (this->fields)._._._._.runTimeData;
            if (cRam_? == '\0') {
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
              cRam_? = '\x01';
            }
            pDVar24 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (pDVar24,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pDVar23 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                      HashtableFunctions_DeepCopyHashTable
                                (pDVar23,(Dictionary_2_System_Object_System_Object_ *)pDVar24,
                                 (MethodInfo *)0x0);
            (pMVar5->fields).runTimeData = pDVar23;
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&(pMVar5->fields).runTimeData >> 0xc);
              lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
              do {
                uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
                puVar10 = (ulonglong *)(lVar8 + 0xADDR);
                LOCK();
                bVar11 = uVar9 == *puVar10;
                if (bVar11) {
                  *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            return pMVar5;
          }
          pLVar6 = (pMVar5->fields).inputLinkRefs;
          if (LStack_1._current == (Object *)0x0) break;
          uVar16 = *(undefined4 *)&LStack_1._current[1].klass;
          uVar17 = *(undefined4 *)&LStack_1._current[1].monitor;
          uVar18 = *(undefined1 *)((longlong)&LStack_1._current[1].monitor + 4);
          pOVar19 = (Object *)FUN_?(TypeInfo__MV__WorldObject__Link);
          *(undefined4 *)&pOVar19[1].klass = uVar16;
          *(undefined4 *)((longlong)&pOVar19[1].klass + 4) = uVar17;
          *(undefined4 *)&pOVar19[1].monitor = uVar17;
          *(undefined1 *)((longlong)&pOVar19[1].monitor + 4) = uVar18;
          pMVar20 = 
          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
          ;
          if (pLVar6 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
          piVar21 = &(pLVar6->fields)._version;
          *piVar21 = *piVar21 + 1;
          pLVar22 = (pLVar6->fields)._items;
          uVar7 = (pLVar6->fields)._size;
          if (pLVar22 == (Link__Array *)0x0) goto code_?;
          if (uVar7 < (uint)pLVar22->max_length) {
            (pLVar6->fields)._size = uVar7 + 1;
            FUN_?();
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pLVar6,pOVar19,
                       pMVar20->klass->rgctx_data[0xe].method);
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVWorldObject *)(*pcVar4)();
  return pMVar5;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Destroy
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar2->fields)._GameCoinManager_k__BackingField,
     this_00 == (MVGameCoinManager *)0x0)) goto code_?;
  MVGameCoinManager::MVGameCoinManager_Evaluate(this_00,(MethodInfo *)0x0);
  if ((this->fields).useInteractor != (UseInteractor *)0x0) {
    pMVar3 = (this->fields).chestObject;
    if (pMVar3 == (MVGamePointChestObject *)0x0) goto code_?;
    pTVar4 = (pMVar3->fields).triggerBoxEvents;
    pUVar5 = (this->fields).useInteractor;
    pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar6,(Object *)pUVar5,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar4 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
    pMVar3 = (this->fields).chestObject;
    if (pMVar3 == (MVGamePointChestObject *)0x0) goto code_?;
    pTVar4 = (pMVar3->fields).triggerBoxEvents;
    pUVar5 = (this->fields).useInteractor;
    pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar6,(Object *)pUVar5,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar4 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
              (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
    pUVar5 = (this->fields).useInteractor;
    if ((pUVar5 == (UseInteractor *)0x0) ||
       (this_01 = (pUVar5->fields).useInteractorVisuals,
       this_01 == (UseInteractorVisualization *)0x0)) goto code_?;
    UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
              (this_01,(this->fields)._._._._.data,(MethodInfo *)0x0);
    bVar7 = iRam_? != 0;
    (this->fields).useInteractor = (UseInteractor *)0x0;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerBase *)0x0) {
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((pMVar1->fields).game != (MVNetworkGame *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0))
    goto code_?;
    pAVar13 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_03 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar13,(Delegate *)this_03,(MethodInfo *)0x0);
    pAVar15 = TypeInfo__System__Action<IWinningCondition>;
    if (pDVar14 == (Delegate *)0x0) {
      (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pAVar13 = (Action_1_IWinningCondition_ *)
                FUN_?(pDVar14,TypeInfo__System__Action<IWinningCondition>);
      if (pAVar13 == (Action_1_IWinningCondition_ *)0x0) {
        FUN_?(pDVar14,pAVar15);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar13;
      pAVar15 = TypeInfo__System__Action<IWinningCondition>;
      lVar9 = FUN_?();
      if (lVar9 == 0) {
        FUN_?(pDVar14,pAVar15);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnWinningConditionFulfilled >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  woid = (this->fields)._._._._.id;
  if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData(woid,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar7 = iRam_? != 0;
    (this->fields)._._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields)._._.cullingSubscriberBase >> 0xc);
      puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar16 = *puVar11;
        LOCK();
        uVar10 = *puVar11;
        if (uVar16 == uVar10) {
          *puVar11 = uVar16 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar16 != uVar10);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar17 = (this->fields)._._._.gameObject;
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
  if (pGVar17 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar17->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar17 = (this->fields)._._._.gameObject;
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
                ((Object_1 *)pGVar17,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pRVar18 = (pMVar2->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._._.id;
    if (pRVar18 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = (HashSet_1_System_Int32Enum_ *)(pRVar18->fields).runtimeDataVariables;
      if (this_02 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                 HashSet_1_System_Int32Enum__Contains
                           (this_02,item,
                            MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar19 != 0) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 == (MVNetworkGame *)0x0) ||
             (pRVar18 = (pMVar2->fields).runtimeVariableNetworkManager,
             pRVar18 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar18,(this->fields)._._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Disable
               (MVGamePointChest *this,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  (this->fields).state = 2;
  if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
     (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GamePointChestModelController *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__MainColor);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pRVar3 = (pGVar2->fields).openingRenderer;
    if (pRVar3 != (Renderer *)0x0) {
      pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar3,(MethodInfo *)0x0);
      if (pMVar4 != (Material *)0x0) {
        pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                           (aCStack_6,pMVar4,StringLiteral__MainColor,(MethodInfo *)0x0);
        pRVar3 = (pGVar2->fields).openingRenderer;
        uVar7._0_4_ = pCVar5->r;
        uVar7._4_4_ = pCVar5->g;
        fVar8 = pCVar5->b;
        if (pRVar3 != (Renderer *)0x0) {
          pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar3,(MethodInfo *)0x0);
          aCStack_6[0].a = 0.0;
          aCStack_6[0].b = fVar8;
          aCStack_6[0]._0_8_ = uVar7;
          if (pMVar4 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar4,StringLiteral__MainColor,aCStack_6,(MethodInfo *)0x0);
            pGVar9 = (pGVar2->fields).openMesh;
            (pGVar2->fields).isOpening = 0;
            if (pGVar9 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar9,0,(MethodInfo *)0x0);
              pGVar9 = (pGVar2->fields).closedMesh;
              if (pGVar9 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar9,0,(MethodInfo *)0x0);
                this_00 = (pGVar2->fields).greyOutScript;
                if (this_00 != (GreyOutObjectScript *)0x0) {
                  GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
                  (this->fields).canRespawn = 0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVGamePointChest *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  fVar3 = VStack_2.y * _UNK_?;
  fVar4 = VStack_2.x * _UNK_?;
  fVar5 = (pVVar1->oneVector).z * _UNK_?;
  this_00 = (this->fields)._._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_6.x = 0.0;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,&QStack_6);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2.z = position->z;
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    aQStack_11[0].x = QStack_6.x;
    aQStack_11[0].y = QStack_6.y;
    aQStack_11[0].z = QStack_6.z;
    aQStack_11[0].w = QStack_6.w;
    VStack_12.y = fVar3;
    VStack_12.x = fVar4;
    VStack_12.z = fVar5;
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_6,&VStack_2,aQStack_11,gridSize,&VStack_12,
                        (MethodInfo *)0x0);
    fVar4 = pVVar9->y;
    fVar3 = pVVar9->z;
    __return_storage_ptr__->x = pVVar9->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVGamePointChest *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if (((pMVar1 != (MVGamePointChestObject *)0x0) &&
      (pTVar2 = (pMVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
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
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pBVar8 = (Bounds *)(*pcVar7)();
      return pBVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      pBVar8 = (Bounds *)(*pcVar7)();
      return pBVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    pMVar1 = (this->fields).chestObject;
    if (((pMVar1 != (MVGamePointChestObject *)0x0) &&
        (pTVar2 = (pMVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_10 = 0;
      fStack_11 = 0.0;
      pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pBVar8 = (Bounds *)(*pcVar7)();
        return pBVar8;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        pBVar8 = (Bounds *)(*pcVar7)();
        return pBVar8;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6,&uStack_10);
      (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_4;
      fVar12 = _UNK_?;
      (__return_storage_ptr__->m_Center).y = (float)uStack_4._4_4_;
      uStack_10._0_4_ = (float)uStack_10 * _UNK_?;
      (__return_storage_ptr__->m_Center).z = fStack_5;
      (__return_storage_ptr__->m_Extents).x = (float)uStack_10;
      (__return_storage_ptr__->m_Extents).y = uStack_10._4_4_ * fVar12;
      (__return_storage_ptr__->m_Extents).z = fStack_11 * fVar12;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pBVar8 = (Bounds *)(*pcVar7)();
  return pBVar8;
}


/* Boolean HandleDifferentChestSizeStages(Single) */

bool Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_HandleDifferentChestSizeStages
               (MVGamePointChest *this,float percentage,MethodInfo *method)

{
  if (percentage * _UNK_? < (float)(this->fields).gamePointsRewarded) {
    return 0;
  }
  obj = (this->fields)._._._.transform;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_2._0_4_ = (pVVar1->oneVector).x;
  uStack_2._4_4_ = (pVVar1->oneVector).y;
  fStack_3 = (pVVar1->oneVector).z * percentage;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  uStack_2 = CONCAT44((float)uStack_2._4_4_ * percentage,(float)(undefined4)uStack_2 * percentage
                      );
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
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar6,&uStack_2);
  return 1;
}


/* Void HandleStandaloneDisabling() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_HandleStandaloneDisabling
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).gameMode == 4) {
        return;
      }
      pMVar2 = (this->fields).chestObject;
      (this->fields).state = 2;
      if ((pMVar2 != (MVGamePointChestObject *)0x0) &&
         (pGVar3 = (pMVar2->fields).modelSelector, pGVar3 != (GamePointChestModelController *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__MainColor);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pRVar4 = (pGVar3->fields).openingRenderer;
        if ((pRVar4 != (Renderer *)0x0) &&
           (pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar4,(MethodInfo *)0x0), pMVar5 != (Material *)0x0)) {
          pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                              (aCStack_7,pMVar5,StringLiteral__MainColor,(MethodInfo *)0x0);
          pRVar4 = (pGVar3->fields).openingRenderer;
          uVar8._0_4_ = pCVar6->r;
          uVar8._4_4_ = pCVar6->g;
          fVar9 = pCVar6->b;
          if (pRVar4 != (Renderer *)0x0) {
            pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar4,(MethodInfo *)0x0);
            aCStack_7[0].a = 0.0;
            aCStack_7[0].b = fVar9;
            aCStack_7[0]._0_8_ = uVar8;
            if (pMVar5 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                        (pMVar5,StringLiteral__MainColor,aCStack_7,(MethodInfo *)0x0);
              pGVar10 = (pGVar3->fields).openMesh;
              (pGVar3->fields).isOpening = 0;
              if (pGVar10 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar10,0,(MethodInfo *)0x0);
                pGVar10 = (pGVar3->fields).closedMesh;
                if (pGVar10 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,0,(MethodInfo *)0x0);
                  this_00 = (pGVar3->fields).greyOutScript;
                  if (this_00 != (GreyOutObjectScript *)0x0) {
                    GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
                    (this->fields).canRespawn = 0;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Initialize
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGamePointChest_UpdateGamePointsRewardedAmount(this,(MethodInfo *)0x0);
  MVGamePointChest_UpdateChestSize(this,(MethodInfo *)0x0);
  MVGamePointChest_SetupUseInteractor(this,(MethodInfo *)0x0);
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_00,(this->fields)._._._._.data,(pUVar1->fields).woOwnerID,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
    pMVar2 = (this->fields).chestObject;
    if (pMVar2 != (MVGamePointChestObject *)0x0) {
      MVLogicObject::MVLogicObject_SetupCulling
                ((MVLogicObject *)this,(pMVar2->fields).visualObject,_UNK_?,
                 (MethodInfo *)0x0);
      MVGamePointChest_HandleStandaloneDisabling(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar3 != (MVGameControllerBase *)0x0) &&
         (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) {
        pAVar5 = (pMVar4->fields).OnWinningConditionFulfilled;
        this_02 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<IWinningCondition>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_,
                   (MethodInfo *)0x0);
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar5,(Delegate *)this_02,(MethodInfo *)0x0);
        pAVar7 = TypeInfo__System__Action<IWinningCondition>;
        if (pDVar6 == (Delegate *)0x0) {
          (pMVar4->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        }
        else {
          pAVar5 = (Action_1_IWinningCondition_ *)
                    FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
          if (pAVar5 == (Action_1_IWinningCondition_ *)0x0) {
            FUN_?(pDVar6,pAVar7);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (pMVar4->fields).OnWinningConditionFulfilled = pAVar5;
          pAVar7 = TypeInfo__System__Action<IWinningCondition>;
          lVar9 = FUN_?(pDVar6,TypeInfo__System__Action<IWinningCondition>);
          if (lVar9 == 0) {
            FUN_?(pDVar6,pAVar7);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&(pMVar4->fields).OnWinningConditionFulfilled >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)(this->fields)._._._._.data;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ,this_01,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_respawnTime);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_01 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                             (this_01,(Object *)StringLiteral_respawnTime,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              ->klass->rgctx_data[0x21].method);
          bVar16 = (byte)((uint)iVar15 >> 0x1f) ^ 1;
          (this->fields).canRespawn = bVar16;
          if (bVar16 != 0) {
            pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                                 (Object *)StringLiteral_respawnTime,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (pOVar17 == (Object *)0x0) goto code_?;
            if ((pOVar17->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar17,lRam_?);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            (this->fields).respawnTime = *(int32_t *)&pOVar17[1].klass;
          }
          pMVar2 = (this->fields).chestObject;
          if ((pMVar2 != (MVGamePointChestObject *)0x0) &&
             (pGVar18 = (pMVar2->fields).modelSelector,
             pGVar18 != (GamePointChestModelController *)0x0)) {
            (pGVar18->fields).shouldGreyOut = (this->fields).canRespawn;
            return;
          }
        }
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_InitializeInventory
               (MVGamePointChest *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).chestObject;
  if ((pMVar1 == (MVGamePointChestObject *)0x0) ||
     (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 == (GamePointChestModelController *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__MainColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar4 = (pGVar2->fields).openMesh;
  if (pGVar4 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    pGVar4 = (pGVar2->fields).closedMesh;
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,1,(MethodInfo *)0x0);
      pRVar5 = (pGVar2->fields).openingRenderer;
      (pGVar2->fields).isOpening = 0;
      if ((pRVar5 != (Renderer *)0x0) &&
         (pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar5,(MethodInfo *)0x0), pMVar6 != (Material *)0x0)) {
        pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                           (aCStack_8,pMVar6,StringLiteral__MainColor,(MethodInfo *)0x0);
        pRVar5 = (pGVar2->fields).openingRenderer;
        uVar9._0_4_ = pCVar7->r;
        uVar9._4_4_ = pCVar7->g;
        fVar10 = pCVar7->b;
        if (pRVar5 != (Renderer *)0x0) {
          pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar5,(MethodInfo *)0x0);
          aCStack_8[0].a = 1.0;
          aCStack_8[0].b = fVar10;
          aCStack_8[0]._0_8_ = uVar9;
          if (pMVar6 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar6,StringLiteral__MainColor,aCStack_8,(MethodInfo *)0x0);
            pGVar11 = (pGVar2->fields).greyOutScript;
            if (pGVar11 != (GreyOutObjectScript *)0x0) {
              GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar11,(MethodInfo *)0x0);
              pGVar11 = (pGVar2->fields).greyOutScript;
              if ((pGVar11 != (GreyOutObjectScript *)0x0) &&
                 (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pGVar11,(MethodInfo *)0x0),
                 pGVar4 != (GameObject *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                ,1,0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pGVar4 == (GameObject *)0x0) {
                  FUN_?();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pvVar12 = (pGVar4->fields)._.m_CachedPtr;
                if (pvVar12 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar4,(MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam_?)(pvVar12,1);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsUsable(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_IsUsable
               (MVGamePointChest *this,int32_t id,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  return (this->fields).state == 0;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_OnDataUpdate
               (MVGamePointChest *this,MethodInfo *method)

{
  MVGamePointChest_UpdateGamePointsRewardedAmount(this,(MethodInfo *)0x0);
  MVGamePointChest_UpdateChestSize(this,(MethodInfo *)0x0);
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UseInteractorVisualization::UseInteractorVisualization_UpdateData
            (this_00,(this->fields)._._._._.data,(pUVar1->fields).woOwnerID,(MethodInfo *)0x0);
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._._.data;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,this_01,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_01,(Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    bVar4 = (byte)((uint)iVar3 >> 0x1f) ^ 1;
    (this->fields).canRespawn = bVar4;
    if (bVar4 != 0) {
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,
                          (Object *)StringLiteral_respawnTime,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar5 == (Object *)0x0) goto code_?;
      if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar5,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).respawnTime = *(int32_t *)&pOVar5[1].klass;
    }
    pMVar6 = (this->fields).chestObject;
    if ((pMVar6 != (MVGamePointChestObject *)0x0) &&
       (pGVar7 = (pMVar6->fields).modelSelector, pGVar7 != (GamePointChestModelController *)0x0)) {
      (pGVar7->fields).shouldGreyOut = (this->fields).canRespawn;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_OnUpdate
               (MVGamePointChest *this,MethodInfo *method)

{
  if ((this->fields).state != 1) {
code_?:
    if (((this->fields).canRespawn != 0) && ((this->fields).state == 2)) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar3 = (float)(*pcRam_?)();
      if ((float)(this->fields).respawnTime + (this->fields).pickUpTime < fVar3) {
        (*(this->klass->vtable).Reset.methodPtr)(this,(this->klass->vtable).Reset.method);
      }
    }
    return;
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 0x88) != 0)) &&
     (*(longlong *)(*(longlong *)(extraout_RAX + 0x88) + 0x10) != 0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = (this->fields).chestObject;
    if ((pMVar4 != (MVGamePointChestObject *)0x0) &&
       (this_00 = (pMVar4->fields).modelSelector, this_00 != (GamePointChestModelController *)0x0))
    {
      GamePointChestModelController::GamePointChestModelController_Open(this_00,(MethodInfo *)0x0);
      pMVar4 = (this->fields).chestObject;
      if (pMVar4 != (MVGamePointChestObject *)0x0) {
        pAVar5 = (pMVar4->fields).audioSource;
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
        if (pAVar5 != (AudioSource *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pAVar5->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pMVar4 = (this->fields).chestObject;
            if ((pMVar4 == (MVGamePointChestObject *)0x0) ||
               (pAVar5 = (pMVar4->fields).audioSource, pAVar5 == (AudioSource *)0x0))
            goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                      (pAVar5,(MethodInfo *)0x0);
          }
        }
        pMVar4 = (this->fields).chestObject;
        if ((pMVar4 != (MVGamePointChestObject *)0x0) &&
           (this_01 = (pMVar4->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0)) {
          ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0);
          (this->fields).state = 2;
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean OpenChest(Int32) */

bool Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_OpenChest
               (MVGamePointChest *this,int32_t instigatorID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).chestObject;
  if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
     (this_00 = (pMVar1->fields).modelSelector, this_00 != (GamePointChestModelController *)0x0)) {
    GamePointChestModelController::GamePointChestModelController_Open(this_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields).chestObject;
    if (pMVar1 != (MVGamePointChestObject *)0x0) {
      pAVar2 = (pMVar1->fields).audioSource;
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
      if (pAVar2 != (AudioSource *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pAVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pMVar1 = (this->fields).chestObject;
          if ((pMVar1 == (MVGamePointChestObject *)0x0) ||
             (pAVar2 = (pMVar1->fields).audioSource, pAVar2 == (AudioSource *)0x0))
          goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar2,(MethodInfo *)0x0);
        }
      }
      pMVar1 = (this->fields).chestObject;
      if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
         (this_01 = (pMVar1->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0)) {
        ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0);
        (this->fields).state = 2;
        return 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Reset
               (MVGamePointChest *this,MethodInfo *method)

{
  if (((this->fields).state == 2) || ((this->fields).state == 1)) {
    pMVar1 = (this->fields).chestObject;
    if ((pMVar1 == (MVGamePointChestObject *)0x0) ||
       (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 == (GamePointChestModelController *)0x0)) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    GamePointChestModelController::GamePointChestModelController_Close(pGVar2,(MethodInfo *)0x0);
    (this->fields).state = 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar4 != (GameSessionData *)0x0) {
    if ((pGVar4->fields).gameMode == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 != (GameSessionData *)0x0) {
      if ((pGVar4->fields).gameMode == 4) {
        return;
      }
      pMVar1 = (this->fields).chestObject;
      (this->fields).state = 2;
      if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
         (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GamePointChestModelController *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__MainColor);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pRVar5 = (pGVar2->fields).openingRenderer;
        if ((pRVar5 != (Renderer *)0x0) &&
           (pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar5,(MethodInfo *)0x0), pMVar6 != (Material *)0x0)) {
          pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                              (aCStack_8,pMVar6,StringLiteral__MainColor,(MethodInfo *)0x0);
          pRVar5 = (pGVar2->fields).openingRenderer;
          uVar9._0_4_ = pCVar7->r;
          uVar9._4_4_ = pCVar7->g;
          fVar10 = pCVar7->b;
          if (pRVar5 != (Renderer *)0x0) {
            pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               (pRVar5,(MethodInfo *)0x0);
            aCStack_8[0].a = 0.0;
            aCStack_8[0].b = fVar10;
            aCStack_8[0]._0_8_ = uVar9;
            if (pMVar6 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                        (pMVar6,StringLiteral__MainColor,aCStack_8,(MethodInfo *)0x0);
              pGVar11 = (pGVar2->fields).openMesh;
              (pGVar2->fields).isOpening = 0;
              if (pGVar11 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar11,0,(MethodInfo *)0x0);
                pGVar11 = (pGVar2->fields).closedMesh;
                if (pGVar11 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar11,0,(MethodInfo *)0x0);
                  this_00 = (pGVar2->fields).greyOutScript;
                  if (this_00 != (GreyOutObjectScript *)0x0) {
                    GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
                    (this->fields).canRespawn = 0;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetToClosed() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_SetToClosed
               (MVGamePointChest *this,MethodInfo *method)

{
  if (((this->fields).state == 2) || ((this->fields).state == 1)) {
    pMVar1 = (this->fields).chestObject;
    if ((pMVar1 == (MVGamePointChestObject *)0x0) ||
       (this_00 = (pMVar1->fields).modelSelector, this_00 == (GamePointChestModelController *)0x0))
    {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GamePointChestModelController::GamePointChestModelController_Close(this_00,(MethodInfo *)0x0);
    (this->fields).state = 0;
  }
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_SetupUseInteractor
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGamePointChest__IsUsable_int__MVInteractableBase_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGamePointChest__OpenChest_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).chestObject;
  if (pMVar1 != (MVGamePointChestObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pGVar3 = (pMVar1->fields).useInteractionRotator;
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
      useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(useFunction,this,MethodInfo__MVGamePointChest__OpenChest_int_);
      checkCanUseFunction =
           (Func_3_Int32_MVInteractableBase_Boolean_ *)
           FUN_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      FUN_?(checkCanUseFunction,this,
                    MethodInfo__MVGamePointChest__IsUsable_int__MVInteractableBase_);
      pUVar4 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar4,(MVWorldObjectClient *)this,pGVar3,0,triggerCollider,useFunction,
                 checkCanUseFunction,_UNK_?,0,1,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).useInteractor = pUVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pMVar1 = (this->fields).chestObject;
      if (pMVar1 != (MVGamePointChestObject *)0x0) {
        pGVar3 = (pMVar1->fields).useInteractionRotator;
        useRequirement = (UseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
        bVar5 = iRam_? != 0;
        *(undefined8 *)&useRequirement[1].fields = 0;
        *(undefined4 *)&useRequirement[2].klass = 0;
        *(undefined1 *)((longlong)&useRequirement[1].klass + 4) = 0;
        useRequirement[2].monitor = (MonitorData *)pGVar3;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&useRequirement[2].monitor >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pUVar4 = (this->fields).useInteractor;
        if (pUVar4 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement(pUVar4,useRequirement,(MethodInfo *)0x0);
          pMVar1 = (this->fields).chestObject;
          if (pMVar1 != (MVGamePointChestObject *)0x0) {
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar10,(Object *)pUVar4,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar10,(MethodInfo *)0x0);
              pMVar1 = (this->fields).chestObject;
              if (pMVar1 != (MVGamePointChestObject *)0x0) {
                pTVar2 = (pMVar1->fields).triggerBoxEvents;
                pUVar4 = (this->fields).useInteractor;
                pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar10,(Object *)pUVar4,
                           MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar2 != (TriggerBoxEvents *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  ppEVar11 = &(pTVar2->fields).TriggerExit;
                  a = (pTVar2->fields).TriggerExit;
                  do {
                    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)a,(Delegate *)pUVar10,(MethodInfo *)0x0);
                    pEVar13 = TypeInfo__System__EventHandler<TriggerEventArgs>;
                    if (pDVar12 == (Delegate *)0x0) {
                      pEVar14 = (EventHandler_1_TriggerEventArgs_ *)0x0;
                    }
                    else {
                      pEVar14 = (EventHandler_1_TriggerEventArgs_ *)
                                FUN_?(pDVar12,
                                              TypeInfo__System__EventHandler<TriggerEventArgs>);
                      if (pEVar14 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
                        FUN_?(pDVar12,pEVar13);
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                    }
                    LOCK();
                    pEVar16 = *ppEVar11;
                    bVar5 = a == pEVar16;
                    if (bVar5) {
                      *ppEVar11 = pEVar14;
                      pEVar16 = a;
                    }
                    UNLOCK();
                    pEVar14 = a;
                    if (!bVar5) {
                      pEVar14 = pEVar16;
                    }
                    if (iRam_? != 0) {
                      uVar6 = (uint)((ulonglong)ppEVar11 >> 0xc);
                      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                      do {
                        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                        LOCK();
                        bVar5 = uVar8 == *puVar9;
                        if (bVar5) {
                          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar5);
                    }
                    bVar5 = pEVar14 != a;
                    a = pEVar14;
                  } while (bVar5);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateCanRespawn(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_UpdateCanRespawn
               (MVGamePointChest *this,Dictionary_2_System_Object_System_Object_ *newData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newData,(Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    bVar2 = (byte)((uint)iVar1 >> 0x1f) ^ 1;
    (this->fields).canRespawn = bVar2;
    if (bVar2 != 0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newData,(Object *)StringLiteral_respawnTime,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->fields).respawnTime = *(int32_t *)&pOVar3[1].klass;
    }
    pMVar5 = (this->fields).chestObject;
    if ((pMVar5 != (MVGamePointChestObject *)0x0) &&
       (pGVar6 = (pMVar5->fields).modelSelector, pGVar6 != (GamePointChestModelController *)0x0)) {
      (pGVar6->fields).shouldGreyOut = (this->fields).canRespawn;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateChestSize() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_UpdateChestSize
               (MVGamePointChest *this,MethodInfo *method)

{
  fVar1 = 0.0;
  while (fVar1 * _UNK_? < (float)(this->fields).gamePointsRewarded) {
    fVar1 = fVar1 + _UNK_?;
    if (_UNK_? < fVar1) {
      return;
    }
  }
  obj = (this->fields)._._._.transform;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_3._0_4_ = (pVVar2->oneVector).x;
  uStack_3._4_4_ = (pVVar2->oneVector).y;
  fStack_4 = (pVVar2->oneVector).z * fVar1;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uStack_3 = CONCAT44((float)uStack_3._4_4_ * fVar1,(float)(undefined4)uStack_3 * fVar1);
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
  (*pcRam_?)(pvVar6,&uStack_3);
  return;
}


/* Void UpdateGamePointsRewardedAmount() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_UpdateGamePointsRewardedAmount
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      (this->fields).gamePointsRewarded = 0x1e;
      return;
    }
    this_01 = (this->fields)._._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_gamePointAmount,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          (this->fields).gamePointsRewarded = *(int32_t *)&pOVar2[1].klass;
          return;
        }
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVGamePointChest() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGamePointChest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGamePointChest->static_fields->purchaseOptions = 0xc;
  return;
}


/* MVGamePointChest(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest__ctor
               (MVGamePointChest *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGamePointChestObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGamePointChest__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_TriggerBoxEvents_object_is_mis);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).gamePointsRewarded = 0x1e;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) goto code_?;
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
            ((MVGamePointRewardLogicObject *)this,data,(pPVar2->fields).gamePointChestPrefab,
             worldObjects,(MethodInfo *)0x0);
  pMVar3 = (MVGamePointChestObject *)(this->fields)._._._.component;
  piVar4 = &(this->fields)._._._.interactionFlags;
  *piVar4 = *piVar4 | 0x100008000;
  if (pMVar3 == (MVGamePointChestObject *)0x0) {
    (this->fields).chestObject = (MVGamePointChestObject *)0x0;
  }
  else {
    bVar5 = (TypeInfo__MVGamePointChestObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__MVGamePointChestObject)) {
      FUN_?(pMVar3);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (this->fields).chestObject = pMVar3;
    bVar5 = (TypeInfo__MVGamePointChestObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__MVGamePointChestObject)) {
      FUN_?(pMVar3);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields).chestObject >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  pMVar3 = (this->fields).chestObject;
  if (pMVar3 == (MVGamePointChestObject *)0x0) goto code_?;
  pTVar11 = (pMVar3->fields).triggerBoxEvents;
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
  if (pTVar11 == (TriggerBoxEvents *)0x0) {
code_?:
    plVar12 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
    if (plVar12 == (longlong *)0x0) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pSVar13 = (String *)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    pSVar13 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar13,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar13,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar11->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar3 = (this->fields).chestObject;
    if (pMVar3 == (MVGamePointChestObject *)0x0) goto code_?;
    pTVar11 = (pMVar3->fields).triggerBoxEvents;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__MVGamePointChest__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar11 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar11,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._._.data;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       (this_00,(Object *)StringLiteral_respawnTime,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    bVar5 = (byte)((uint)iVar14 >> 0x1f) ^ 1;
    (this->fields).canRespawn = bVar5;
    if (bVar5 != 0) {
      pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,
                           (Object *)StringLiteral_respawnTime,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar15 == (Object *)0x0) goto code_?;
      if ((pOVar15->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar15,lRam_?);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (this->fields).respawnTime = *(int32_t *)&pOVar15[1].klass;
    }
    pMVar3 = (this->fields).chestObject;
    if ((pMVar3 != (MVGamePointChestObject *)0x0) &&
       (pGVar16 = (pMVar3->fields).modelSelector, pGVar16 != (GamePointChestModelController *)0x0)) {
      (pGVar16->fields).shouldGreyOut = (this->fields).canRespawn;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_get_DocumentationType
          (MVGamePointChest *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_GamePointChest;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_get_Visible
               (MVGamePointChest *this,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if (((pMVar1 != (MVGamePointChestObject *)0x0) &&
      (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GamePointChestModelController *)0x0)) &&
     (pGVar3 = (pGVar2->fields).openMesh, pGVar3 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pGVar3->fields)._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    cVar8 = (*pcRam_?)(pvVar4);
    if (cVar8 != '\0') {
      return 1;
    }
    pGVar3 = (pGVar2->fields).closedMesh;
    if (pGVar3 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar3 == (GameObject *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pvVar4 = (pGVar3->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0,in_R8,in_R9,unaff_RBX);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar6 = (*pcRam_?)(pvVar4);
      return bVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_set_Visible
               (MVGamePointChest *this,bool value,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if (pMVar1 != (MVGamePointChestObject *)0x0) {
    pGVar2 = (pMVar1->fields).modelSelector;
    if ((this->fields).state == 0) {
      if (pGVar2 != (GamePointChestModelController *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral__MainColor);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar3 = (pGVar2->fields).openMesh;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pGVar3 = (pGVar2->fields).closedMesh;
          if (pGVar3 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,1,(MethodInfo *)0x0);
            pRVar4 = (pGVar2->fields).openingRenderer;
            (pGVar2->fields).isOpening = 0;
            if ((pRVar4 != (Renderer *)0x0) &&
               (pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                   (pRVar4,(MethodInfo *)0x0), pMVar5 != (Material *)0x0)) {
              pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                                  (aCStack_7,pMVar5,StringLiteral__MainColor,(MethodInfo *)0x0);
              pRVar4 = (pGVar2->fields).openingRenderer;
              uVar8._0_4_ = pCVar6->r;
              uVar8._4_4_ = pCVar6->g;
              fVar9 = pCVar6->b;
              if (pRVar4 != (Renderer *)0x0) {
                pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                   (pRVar4,(MethodInfo *)0x0);
                aCStack_7[0].a = 1.0;
                aCStack_7[0].b = fVar9;
                aCStack_7[0]._0_8_ = uVar8;
                if (pMVar5 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                            (pMVar5,StringLiteral__MainColor,aCStack_7,(MethodInfo *)0x0);
                  pGVar10 = (pGVar2->fields).greyOutScript;
                  if (pGVar10 != (GreyOutObjectScript *)0x0) {
                    GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar10,(MethodInfo *)0x0);
                    pGVar10 = (pGVar2->fields).greyOutScript;
                    if ((pGVar10 != (GreyOutObjectScript *)0x0) &&
                       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)pGVar10,(MethodInfo *)0x0),
                       pGVar3 != (GameObject *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                      ,1,0);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (pGVar3 == (GameObject *)0x0) {
                        FUN_?();
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pvVar12 = (pGVar3->fields)._.m_CachedPtr;
                      if (pvVar12 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pGVar3,(MethodInfo *)0x0);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pcVar11 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam_?)(pvVar12,1);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    else if (pGVar2 != (GamePointChestModelController *)0x0) {
      pGVar3 = (pGVar2->fields).openMesh;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        pGVar3 = (pGVar2->fields).closedMesh;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          obj = (pGVar2->fields).openingAnimation;
          if (obj != (Animation *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animation>_UnityEngine__Animation_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar12 = (obj->fields)._._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcVar11 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcRam_? = pcVar11;
            (*pcRam_?)(pvVar12);
            pcVar11 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcRam_? = pcVar11;
            fVar9 = (float)(*pcRam_?)();
            pGVar10 = (pGVar2->fields).greyOutScript;
            (pGVar2->fields).openingStartTime = fVar9;
            (pGVar2->fields).isOpening = 1;
            if (pGVar10 != (GreyOutObjectScript *)0x0) {
              GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar10,(MethodInfo *)0x0);
              if ((pGVar2->fields).shouldGreyOut == 0) {
                pGVar10 = (pGVar2->fields).greyOutScript;
                if ((pGVar10 == (GreyOutObjectScript *)0x0) ||
                   (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pGVar10,(MethodInfo *)0x0),
                   pGVar3 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,0,(MethodInfo *)0x0);
              }
              return;
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
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_triggerBoxEvents_TriggerEnter
               (MVGamePointChest *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGamePointChest);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).state == 0) {
    pUVar1 = (this->fields).useInteractor;
    if ((pUVar1 == (UseInteractor *)0x0) ||
       (this_00 = (pUVar1->fields).useInteractorVisuals,
       this_00 == (UseInteractorVisualization *)0x0)) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UVar3 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                      (this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MVGamePointChest->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((TypeInfo__MVGamePointChest->static_fields->purchaseOptions & UVar3) == 0) {
      (this->fields).state = 1;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((e == (TriggerEventArgs *)0x0) || (this_01 == (MVNetworkGame_OperationRequests *)0x0))
      goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                (this_01,(this->fields)._._._._.id,(e->fields).instigatorWOID,(MethodInfo *)0x0);
      FakeGamePointGainEffectManager::FakeGamePointGainEffectManager_FakeGainEffect
                ((this->fields).gamePointsRewarded,(MethodInfo *)0x0);
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar5 = (float)(*pcRam_?)();
      (this->fields).pickUpTime = fVar5;
    }
  }
  return;
}

