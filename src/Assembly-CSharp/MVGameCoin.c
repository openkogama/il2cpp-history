
/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVGameCoin::MVGameCoin_Clone
          (MVGameCoin *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    this = (MVGameCoin *)0x0;
    func_?();
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
    return pMVar3;
  }
  this_01 = (MVGameCoinManager *)
            TierOnDeathProgress+<DoTierProgress>c__Iterator0::
            TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                      ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)pMVar1,(MethodInfo *)0x0);
  if (this_01 == (MVGameCoinManager *)0x0) goto code_?;
  this = (MVGameCoin *)0x0;
  MVGameCoinManager::MVGameCoinManager_Evaluate(this_01,(MethodInfo *)0x0);
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = prototypes;
  pOVar4 = (Object *)
           (*(code *)(prototypes->klass->vtable).
                     System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add
                     .method)(prototypes,(prototypes->klass->vtable).Clear.methodPtr);
  pSVar5 = (String *)
           ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                     (pOVar4,(MethodInfo *)0x0);
  pSVar6 = pSVar5;
  if (pSVar5 != (String *)0x0) {
    bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pSVar5->klass->_1).naturalAligment < bVar7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pSVar5->klass->_1).typeHierarchy[bVar7 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pSVar6 = (String *)0x0;
    if (bVar8) {
      pSVar6 = pSVar5;
    }
    if (pSVar6 == (String *)0x0) {
      func_?(pSVar5,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      goto code_?;
    }
  }
  MVNetworkGame::MVNetworkGame_set_KogamaMainpageURL
            ((MVNetworkGame *)this_00,pSVar6,(MethodInfo *)0x0);
  this_02 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
            MVWorldObject_DeepCopyWorldObjectDataParameters
                      ((MVWorldObject *)this_00,(MethodInfo *)0x0);
  ownerActorNumber = (int32_t)this_02;
  pOVar9 = PrefabPool::PrefabPool_get_MVCameraSettingsPrefab
                     ((PrefabPool *)this_00,(MethodInfo *)0x0);
  (*(code *)(this_00->klass->vtable).Clear.method)
            (this_00,pOVar9,
             (this_00->klass->vtable).
             System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains
             .methodPtr);
  prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)((uint)prototypes & 0xffffff)
  ;
  key = (MVGameCoin *)
        func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,(int)&prototypes + 3);
  if (in_stack_10 != 0) {
    cloneGroupId = (int32_t)&this;
    ownerActorNumber = (int32_t)TypeInfo__System__Int32;
    this = (MVGameCoin *)&UNK_?;
    ownerActorNumber = func_?();
    if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      cloneGroupId = (int32_t)
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
      ;
      this = key;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_02,(String *)key,
                 (Theme *)ownerActorNumber,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      cloneGroupId = (int)&cloneGroupId + 3;
      ownerActorNumber = (int32_t)TypeInfo__MV__WorldObject__WorldObjectDataParameters;
      this = (MVGameCoin *)&UNK_?;
      pSVar6 = (String *)func_?();
      this = (MVGameCoin *)&stack0xfffffffc;
      pTVar11 = (Theme *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)ownerActorNumber,pSVar6,pTVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pOVar4 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_00,(MethodInfo *)0x0
                         );
      if ((pOVar4 == (Object *)0xffffffff) && (method == (MethodInfo *)0x0)) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_This_is_a_hack_created_for_spawn,(MethodInfo *)0x0);
        cloneGroupId._0_3_ = CONCAT12(9,(undefined2)cloneGroupId);
        key_00 = (MethodInfo *)func_?();
        worldObjects_00 = TypeInfo__System__Int32;
        pTVar11 = (Theme *)func_?();
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)ownerActorNumber;
        worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?;
        method = key_00;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)ownerActorNumber,(String *)key_00,pTVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      else {
        cloneGroupId._0_3_ = CONCAT12(9,(undefined2)cloneGroupId);
        pSVar6 = (String *)func_?();
        worldObjects_00 = (Int32__Class *)func_?();
        method = (MethodInfo *)&UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)ownerActorNumber,pSVar6,
                   (Theme *)worldObjects_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      cloneGroupId._0_3_ = CONCAT12(2,(undefined2)cloneGroupId);
      pSVar6 = (String *)func_?();
      pTVar11 = (Theme *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)ownerActorNumber,pSVar6,pTVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      cloneGroupId._0_2_ = CONCAT11(10,(undefined1)cloneGroupId);
      pSVar6 = (String *)func_?();
      ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
      NamedThemeAttribute_1_UnityEngine_Color__get_Name
                ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
      pTVar11 = (Theme *)func_?();
      worldObjectData = ownerActorNumber;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)ownerActorNumber,pSVar6,pTVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pMVar3 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                          ((Dictionary_2_System_Object_System_Object_ *)worldObjectData,
                           (Dictionary_2_System_Int32_MVWorldObjectClient_ *)worldObjects_00,
                           (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&UNK_?,
                           (MethodInfo *)0x0);
      if ((pMVar3 != (MVWorldObjectClient *)0x0) &&
         (*(Dictionary_2_System_Int32_System_Int32_ **)(in_stack_10 + 0x1c) !=
          (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__Add
                  (*(Dictionary_2_System_Int32_System_Int32_ **)(in_stack_10 + 0x1c),
                   (int32_t)(this_00->fields).table,(pMVar3->fields)._.id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          ownerActorNumber = (int32_t)TypeInfo__MVGameControllerBase;
          this = (MVGameCoin *)&UNK_?;
          func_?();
        }
        ownerActorNumber = 0;
        this = (MVGameCoin *)&UNK_?;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          cloneGroupId = 0;
          this = (MVGameCoin *)pMVar1;
          ownerActorNumber = (int32_t)pMVar3;
          MVNetworkGame::MVNetworkGame_AddCloneToWorldObjects(pMVar1,pMVar3,(MethodInfo *)0x0);
          cloneGroupId = 0;
          ownerActorNumber = *(undefined4 *)(in_stack_10 + 0x14);
          this = (MVGameCoin *)this_00;
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
                    ((MVWorldObject *)this_00,(List_1_System_Int32_ *)ownerActorNumber,
                     (MethodInfo *)0x0);
          cloneGroupId = 0;
          ownerActorNumber = *(undefined4 *)(in_stack_10 + 0x18);
          this = (MVGameCoin *)this_00;
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetObjectLinksForClone
                    ((MVWorldObject *)this_00,(List_1_System_Int32_ *)ownerActorNumber,
                     (MethodInfo *)0x0);
          *(int *)(in_stack_10 + 8) = *(int *)(in_stack_10 + 8) + 1;
          return pMVar3;
        }
      }
    }
  }
code_?:
  cloneGroupId = 0;
  ownerActorNumber = (int32_t)&UNK_?;
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar3;
}


/* MVWorldObject DeepCopy() */

MVWorldObject *
Assembly-CSharp.dll::MVGameCoin::MVGameCoin_DeepCopy(MVGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 == (MVNetworkGame *)0x0) {
code_?:
    this = (MVGameCoin *)0x0;
    func_?();
    pcVar1 = (code *)swi(3);
    pMVar2 = (MVWorldObject *)(*pcVar1)();
    return pMVar2;
  }
  this_01 = (MVGameCoinManager *)
            TierOnDeathProgress+<DoTierProgress>c__Iterator0::
            TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                      ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_00,(MethodInfo *)0x0);
  if (this_01 == (MVGameCoinManager *)0x0) goto code_?;
  this = (MVGameCoin *)0x0;
  MVGameCoinManager::MVGameCoinManager_Evaluate(this_01,(MethodInfo *)0x0);
  uStack3 = 0xffffffff;
  method = (MethodInfo *)&DAT_?;
  this = (MVGameCoin *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_4 = (ScaleAnimationBase *)0x0;
  LStack_5.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_5.monitor = (MonitorData *)0x0;
  LStack_5.fields._items = (Color32__Array *)0x0;
  LStack_5.fields._size = 0;
  auStack_6._0_4_ = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Color32__Array *)0x0;
  auStack_6._12_4_ = (Object *)0x0;
  func_?();
  pOStack_7 = (Object__Class *)0xffffffff;
  piStack_8 = (int *)&stack0xffffff9c;
  pMVar2 = (MVWorldObject *)
           (*(code *)(((List_1_UnityEngine_Vector4___Class *)in_stack_9->klass)->vtable).
                     System_Collections_Generic_ICollection_T__get_IsReadOnly.method)
                     (in_stack_9,
                      (((List_1_UnityEngine_Vector4___Class *)in_stack_9->klass)->vtable).Add
                      .methodPtr);
  pMStack_10 = pMVar2;
  this_02 = (ScaleAnimationBase *)
            func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_02,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  if (pMVar2 == (MVWorldObject *)0x0) {
code_?:
    pSVar11 = (ScaleAnimationBase *)func_?();
    pSVar12 = this_02;
  }
  else {
    (pMVar2->fields).outputLinkRefs = (List_1_MV_WorldObject_Link_ *)this_02;
    pLVar13 = (List_1_UnityEngine_Color32_ *)(in_stack_9->fields).originalScale.z;
    if (pLVar13 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_15,pLVar13,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                       );
    LStack_5.klass = (List_1_UnityEngine_Color32___Class *)pLVar14->l;
    LStack_5.monitor = (MonitorData *)pLVar14->next;
    LStack_5.fields._items = (Color32__Array *)pLVar14->ver;
    LStack_5.fields._size = (pLVar14->current).rgba;
    uStack3 = 0;
    while( true ) {
      auStack_15._4_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
      ;
      auStack_15._0_4_ = auStack_6 + 0x10;
      cVar16 = func_?();
      if (cVar16 == '\0') break;
      pOVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          (auStack_6 + 0x10),
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                         );
      pOStack_18 = (Object__Class *)(pMVar2->fields).outputLinkRefs;
      if (pOVar17 == (Object *)0x0) goto code_?;
      pOVar19 = pOVar17[1].klass;
      pOStack_20 = pOVar17[2].klass;
      uVar21 = *(undefined1 *)&pOVar17[2].monitor;
      pMVar22 = (MethodInfo *)&UNK_?;
      this_02 = (ScaleAnimationBase *)func_?();
      (this_02->fields)._._._._.m_CachedPtr = (void *)0xffffffff;
      (this_02->fields).state = -1;
      (this_02->fields).originalScale.x = -NAN;
      ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,pMVar22);
      (this_02->fields)._._._._.m_CachedPtr = pOVar19;
      (this_02->fields).state = (int32_t)pOStack_20;
      (this_02->fields).originalScale.x = (float)pOStack_20;
      *(undefined1 *)&(this_02->fields).originalScale.y = uVar21;
      if (pOStack_18 == (Object__Class *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pOStack_18,(UIPushOption__Enum)this_02,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                );
    }
    pSVar12 = (ScaleAnimationBase *)0x0;
    *piStack_8 = 0x69;
    iVar23 = 0;
    uStack3 = 0xffffffff;
    func_?(auStack_6 + 0x10,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    pSVar11 = pSStack_4;
    if (pSStack_4 == (ScaleAnimationBase *)0x0) {
      if (*piStack_8 == 0x69) {
        iVar23 = -1;
      }
      this_02 = (ScaleAnimationBase *)
                func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>)
      ;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                ((List_1_UnityEngine_Vector4_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
      if (pMVar2 != (MVWorldObject *)0x0) {
        (pMVar2->fields).inputLinkRefs = (List_1_MV_WorldObject_Link_ *)this_02;
        pLVar13 = (List_1_UnityEngine_Color32_ *)(in_stack_9->fields).target;
        if (pLVar13 != (List_1_UnityEngine_Color32_ *)0x0) {
          pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                   List_1_UnityEngine_Color32__GetEnumerator
                             ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_15,pLVar13,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                             );
          auStack_6._0_4_ = pLVar14->l;
          auStack_6._4_4_ = pLVar14->next;
          auStack_6._8_4_ = pLVar14->ver;
          auStack_6._12_4_ = (pLVar14->current).rgba;
          uStack3 = 2;
          while( true ) {
            auStack_15._4_4_ =
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
            ;
            auStack_15._0_4_ = auStack_6;
            cVar16 = func_?();
            pSVar12 = pSStack_4;
            if (cVar16 == '\0') break;
            pOVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                auStack_6,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                               );
            pOStack_20 = (Object__Class *)(pMVar2->fields).inputLinkRefs;
            if (pOVar17 == (Object *)0x0) goto code_?;
            pOStack_7 = pOVar17[1].klass;
            pOStack_18 = pOVar17[2].klass;
            uVar21 = *(undefined1 *)&pOVar17[2].monitor;
            pMVar22 = (MethodInfo *)&UNK_?;
            this_02 = (ScaleAnimationBase *)func_?();
            (this_02->fields)._._._._.m_CachedPtr = (void *)0xffffffff;
            (this_02->fields).state = -1;
            (this_02->fields).originalScale.x = -NAN;
            ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,pMVar22);
            (this_02->fields)._._._._.m_CachedPtr = pOStack_7;
            (this_02->fields).state = (int32_t)pOStack_18;
            (this_02->fields).originalScale.x = (float)pOStack_18;
            *(undefined1 *)&(this_02->fields).originalScale.y = uVar21;
            if (pOStack_20 == (Object__Class *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)pOStack_20,(UIPushOption__Enum)this_02,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                      );
          }
          piStack_8[iVar23 + 1] = 0xcc;
          uStack3 = 0xffffffff;
          func_?(auStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                         );
          uVar24 = 0;
          if (pSVar12 != (ScaleAnimationBase *)0x0) goto code_?;
          pDVar25 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                   HashtableFunctions_DeepCopyHashTable_1
                             ((Dictionary_2_System_Object_System_Object_ *)
                              in_stack_9[2].fields._._._._.m_CachedPtr,(MethodInfo *)0x0);
          this_02 = in_stack_9;
          if (pMVar2 != (MVWorldObject *)0x0) {
            (pMVar2->fields).data = pDVar25;
            pDVar25 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                     HashtableFunctions_DeepCopyHashTable_1
                               ((Dictionary_2_System_Object_System_Object_ *)
                                in_stack_9[2].fields.state,(MethodInfo *)0x0);
            (pMVar2->fields).runTimeData = pDVar25;
            *unaff_FS_OFFSET = this;
            return pMVar2;
          }
        }
      }
      goto code_?;
    }
  }
  uVar24 = 0;
  func_?(pSVar11,0,0);
code_?:
  func_?(pSVar12,0,uVar24);
  pcVar1 = (code *)swi(3);
  pMVar2 = (MVWorldObject *)(*pcVar1)();
  return pMVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_Destroy(MVGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (MVGameCoinManager *)
              TierOnDeathProgress+<DoTierProgress>c__Iterator0::
              TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                        ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)pMVar1,(MethodInfo *)0x0)
    ;
    if (this_00 != (MVGameCoinManager *)0x0) {
      MVGameCoinManager::MVGameCoinManager_Evaluate(this_00,(MethodInfo *)0x0);
      pUVar2 = (this->fields).useInteractor;
      if (pUVar2 == (UseInteractor *)0x0) {
code_?:
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
          MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          source = (pMVar1->fields).OnWinningConditionFulfilled;
          puVar3 = &UNK_?;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action<IWinningCondition>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__MVGameCoin__OnWinningConditionFulfilled_IWinningCondition_,
                     MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
          pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)source,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pDVar6 = (Delegate *)0x0;
          if (pDVar5 != (Delegate *)0x0) {
            if ((Action_1_IWinningCondition___Class *)pDVar5->klass ==
                TypeInfo__System__Action<IWinningCondition>) {
              pDVar6 = pDVar5;
            }
            pAVar7 = TypeInfo__System__Action<IWinningCondition>;
            if (pDVar6 == (Delegate *)0x0) goto code_?;
          }
          *(Delegate **)(puVar3 + 0xb8) = pDVar6;
          goto code_?;
        }
      }
      else {
        pMVar8 = (this->fields).pickupObject;
        if (pMVar8 != (MVGameCoinObject *)0x0) {
          pTVar9 = (pMVar8->fields).triggerBoxEvents;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)pUVar2,
                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,
                     MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                    );
          if (pTVar9 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                      (pTVar9,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
            pMVar8 = (this->fields).pickupObject;
            if (pMVar8 != (MVGameCoinObject *)0x0) {
              pTVar9 = (pMVar8->fields).triggerBoxEvents;
              pUVar2 = (this->fields).useInteractor;
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)pUVar2,
                         MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                         ,
                         MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                        );
              if (pTVar9 != (TriggerBoxEvents *)0x0) {
                TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                          (pTVar9,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
                pUVar2 = (this->fields).useInteractor;
                data = (Dictionary_2_System_Object_System_Object_ *)
                       PrefabPool::PrefabPool_get_MVBatteryPrefab
                                 ((PrefabPool *)this,(MethodInfo *)0x0);
                if (pUVar2 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_OnDestroy(pUVar2,data,(MethodInfo *)0x0);
                  (this->fields).useInteractor = (UseInteractor *)0x0;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pDVar5 = extraout_ECX;
  pAVar7 = extraout_EDX;
code_?:
  func_?(pDVar5,pAVar7);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVGameCoin::MVGameCoin_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVGameCoin *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,*pVVar1,2.0,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      __return_storage_ptr___00 = (Quaternion *)&stack0xffffffe0;
      puVar3 = &UNK_?;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (__return_storage_ptr___00,this_01,(MethodInfo *)0x0);
      fVar5 = pQVar4->x;
      fVar6 = pQVar4->y;
      fVar7 = pQVar4->z;
      fVar8 = pQVar4->w;
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = fVar6;
      rotation.x = fVar5;
      rotation.z = fVar7;
      rotation.w = fVar8;
      scale.y = (float)__return_storage_ptr___00;
      scale.x = (float)puVar3;
      scale.z = fVar2;
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,0.0,scale,(MethodInfo *)0x0);
      fVar5 = pVVar1->y;
      fVar2 = pVVar1->z;
      __return_storage_ptr___00->x = pVVar1->x;
      __return_storage_ptr___00->y = fVar5;
      __return_storage_ptr___00->z = fVar2;
      return (Vector3 *)__return_storage_ptr___00;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_Initialize(MVGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGameCoin_SetupUserInteractor(this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      this_01 = (MVGameCoinManager *)
                TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)pMVar1,
                           (MethodInfo *)0x0);
      if (this_01 != (MVGameCoinManager *)0x0) {
        MVGameCoinManager::MVGameCoinManager_Evaluate(this_01,(MethodInfo *)0x0);
        MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
        pMVar2 = (this->fields).pickupObject;
        if (pMVar2 != (MVGameCoinObject *)0x0) {
          MVLogicObject::MVLogicObject_SetupCulling
                    ((MVLogicObject *)this,(pMVar2->fields).visualObject,2.0,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pAStack3 = TypeInfo__System__Action<IWinningCondition>;
            pAVar4 = (pMVar1->fields).OnWinningConditionFulfilled;
            this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_02,(Object *)this,
                       MethodInfo__MVGameCoin__OnWinningConditionFulfilled_IWinningCondition_,
                       MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__)
            ;
            pAStack5 =
                 (Action_1_IWinningCondition_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar4,(Delegate *)this_02,(MethodInfo *)0x0);
            pAVar4 = (Action_1_IWinningCondition_ *)0x0;
            if (pAStack5 == (Action_1_IWinningCondition_ *)0x0) {
code_?:
              (pMVar1->fields).OnWinningConditionFulfilled = pAVar4;
              return;
            }
            if (pAStack5->klass == TypeInfo__System__Action<IWinningCondition>) {
              pAVar4 = pAStack5;
            }
            pAStack6 = TypeInfo__System__Action<IWinningCondition>;
            if (pAVar4 != (Action_1_IWinningCondition_ *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  pAStack3 = (Action_1_IWinningCondition___Class *)0x0;
  func_?();
  pAStack5 = extraout_ECX;
  pAStack6 = extraout_EDX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean IsCoinTakeable(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVGameCoin::MVGameCoin_IsCoinTakeable
               (MVGameCoin *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  return (this->fields).state == 0;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_OnDataUpdate(MVGameCoin *this,MethodInfo *method)

{
  this_00 = (this->fields).useInteractor;
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean OnPickup(Int32) */

bool Assembly-CSharp.dll::MVGameCoin::MVGameCoin_OnPickup
               (MVGameCoin *this,int32_t instigatorID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     this_03 != (MVLocalPlayer *)0x0)) {
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,(MethodInfo *)0x0);
    if ((String *)instigatorID != pSVar2) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 == (MVNetworkGame *)0x0) ||
          (pPVar3 = (PrefabPool *)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
          pPVar3 == (PrefabPool *)0x0)) ||
         (pEVar4 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                   PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar3,(MethodInfo *)0x0),
         pEVar4 == (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0))
      goto code_?;
      a = (SpawnRoleVariable_1_System_Int32_ *)
          System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    (pEVar4,(MethodInfo *)0x0);
      bVar5 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Equality
                        (instigatorID,a,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                        );
      if (bVar5 == 0) {
        return 0;
      }
    }
    if ((this->fields).state != 0) {
      return 0;
    }
    pMVar6 = (this->fields).pickupObject;
    (this->fields).isVisible = 0;
    if ((pMVar6 != (MVGameCoinObject *)0x0) &&
       (this_00 = (pMVar6->fields).pickupItem, this_00 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
      (this->fields).state = 1;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                         ((MethodInfo *)0x0);
      pMVar6 = (this->fields).pickupObject;
      (this->fields).pickedUpTime = fVar7;
      if (pMVar6 != (MVGameCoinObject *)0x0) {
        pAVar8 = (pMVar6->fields).audioSource;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pAVar8,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pMVar6 = (this->fields).pickupObject;
          if ((pMVar6 == (MVGameCoinObject *)0x0) ||
             (pAVar8 = (pMVar6->fields).audioSource, pAVar8 == (AudioSource *)0x0))
          goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar8,(MethodInfo *)0x0);
        }
        pMVar6 = (this->fields).pickupObject;
        if ((pMVar6 != (MVGameCoinObject *)0x0) &&
           (this_01 = (pMVar6->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0)) {
          ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pOVar9 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                       TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                                 ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)pMVar1,
                                  (MethodInfo *)0x0), pOVar9 != (Object *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pMVar10 = pOVar9[0xc].monitor;
            pOVar11 = pOVar9[0xd].klass;
            pMVar12 = pOVar9[0xd].monitor;
            pOVar13 = pOVar9[0xe].klass;
            pMVar14 = pOVar9[0xe].monitor;
            pOVar15 = pOVar9[0xf].klass;
            pMVar16 = pOVar9[0xf].monitor;
            pOVar17 = pOVar9[0x10].klass;
            if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)
               ) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            }
            value.hiddenValue = (int32_t)pOVar15;
            value.currentCryptoKey = (int32_t)pMVar14;
            value.fakeValue = (int32_t)pMVar16;
            value._12_4_ = pOVar17;
            iVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
            value_00.hiddenValue = (int32_t)pOVar11;
            value_00.currentCryptoKey = (int32_t)pMVar10;
            value_00.fakeValue = (int32_t)pMVar12;
            value_00._12_4_ = pOVar13;
            iVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
            pOVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredInt::ObscuredInt_op_Implicit
                                ((ObscuredInt *)&stack0xffffffdc,
                                 (int)pOVar9[8].klass * iVar19 + iVar18,(MethodInfo *)0x0);
            this_02 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)pOVar9[0x14].monitor;
            pMVar14 = (MonitorData *)pOVar20->currentCryptoKey;
            pOVar15 = (Object__Class *)pOVar20->hiddenValue;
            pMVar16 = (MonitorData *)pOVar20->fakeValue;
            pOVar17 = *(Object__Class **)&pOVar20->inited;
            pOVar9[0xe].monitor = pMVar14;
            pOVar9[0xf].klass = pOVar15;
            pOVar9[0xf].monitor = pMVar16;
            pOVar9[0x10].klass = pOVar17;
            if (this_02 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
              if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started ==
                  0)) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              }
              value_01.hiddenValue = (int32_t)pOVar15;
              value_01.currentCryptoKey = (int32_t)pMVar14;
              value_01.fakeValue = (int32_t)pMVar16;
              value_01._12_4_ = pOVar17;
              iVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredInt::ObscuredInt_op_Implicit_1(value_01,(MethodInfo *)0x0);
              if (this_02 == (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0)
              goto code_?;
              MVGameCoinManager+OnGameCoinAmountChangeDelegate::
              MVGameCoinManager_OnGameCoinAmountChangeDelegate_Invoke
                        (this_02,iVar18,(MethodInfo *)0x0);
            }
            if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVClientSettings);
            }
            bVar5 = MVClientSettings::MVClientSettings_IsFlagSet
                              (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,
                               (MethodInfo *)0x0);
            if (bVar5 == 0) {
              return 1;
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            triggerBoxOwnerId =
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar1 != (MVNetworkGame *)0x0) &&
                (pPVar3 = (PrefabPool *)
                          MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                pPVar3 != (PrefabPool *)0x0)) &&
               (pEVar4 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                         PrefabPool::PrefabPool_get_MVBatteryPrefab(pPVar3,(MethodInfo *)0x0),
               pEVar4 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0)) {
              s = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)
                  System.Core.dll::System::Linq::
                  Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                            (pEVar4,(MethodInfo *)0x0);
              triggerInstigatorId =
                   Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                   SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
                   SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                             (s,
                              MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                             );
              if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                          (this_04,(int32_t)triggerBoxOwnerId,triggerInstigatorId,(MethodInfo *)0x0)
                ;
                return 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  bVar5 = (*pcVar21)();
  return bVar5;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_OnUpdate(MVGameCoin *this,MethodInfo *method)

{
  iVar1 = (this->fields).state;
  if ((iVar1 != 0) && (iVar1 != 3)) {
    if (iVar1 == 1) {
      pMVar2 = (this->fields).pickupObject;
      if ((pMVar2 == (MVGameCoinObject *)0x0) ||
         (pRVar3 = (pMVar2->fields).rotateLocal, pRVar3 == (RotateLocal *)0x0))
      goto code_?;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)pRVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pMVar2 = (this->fields).pickupObject;
        if ((pMVar2 == (MVGameCoinObject *)0x0) ||
           (pRVar3 = (pMVar2->fields).rotateLocal, pRVar3 == (RotateLocal *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pRVar3,0,(MethodInfo *)0x0);
      }
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      fVar5 = fVar5 - (this->fields).pickedUpTime;
      pfVar6 = &(this->fields).pickedUpStateDuration;
      if (*pfVar6 <= fVar5 && fVar5 != *pfVar6) {
        (this->fields).state = 2;
        return;
      }
    }
    else if (iVar1 == 2) {
      pMVar2 = (this->fields).pickupObject;
      if ((pMVar2 == (MVGameCoinObject *)0x0) ||
         (pRVar3 = (pMVar2->fields).rotateLocal, pRVar3 == (RotateLocal *)0x0))
      goto code_?;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)pRVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pMVar2 = (this->fields).pickupObject;
        if ((pMVar2 == (MVGameCoinObject *)0x0) ||
           (pRVar3 = (pMVar2->fields).rotateLocal, pRVar3 == (RotateLocal *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pRVar3,0,(MethodInfo *)0x0);
      }
      fVar5 = (this->fields).pickedUpTime;
      fVar7 = (this->fields).pickedUpStateDuration;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      fVar8 = fVar8 - (fVar7 + fVar5);
      pfVar6 = &(this->fields).reshowingStateDuration;
      if (*pfVar6 <= fVar8 && fVar8 != *pfVar6) {
        (this->fields).state = 3;
      }
    }
    return;
  }
  pMVar2 = (this->fields).pickupObject;
  if ((pMVar2 != (MVGameCoinObject *)0x0) &&
     (pRVar3 = (pMVar2->fields).rotateLocal, pRVar3 != (RotateLocal *)0x0)) {
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pRVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    pMVar2 = (this->fields).pickupObject;
    if ((pMVar2 != (MVGameCoinObject *)0x0) &&
       (pRVar3 = (pMVar2->fields).rotateLocal, pRVar3 != (RotateLocal *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pRVar3,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_Reset(MVGameCoin *this,MethodInfo *method)

{
  if ((this->fields).isVisible == 0) {
    pMVar1 = (this->fields).pickupObject;
    if ((pMVar1 == (MVGameCoinObject *)0x0) ||
       (this_00 = (pMVar1->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0)) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
    (this->fields).isVisible = 1;
  }
  (this->fields).state = 0;
  return;
}


/* Void SetupUserInteractor() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_SetupUserInteractor
               (MVGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).pickupObject;
  if (pMVar1 != (MVGameCoinObject *)0x0) {
    pGVar2 = (pMVar1->fields).useInteractionRotator;
    pTVar3 = (pMVar1->fields).triggerBoxEvents;
    if (pTVar3 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Func<int,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,this->klass[1]._0.image,
                 MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVGameCoin__IsCoinTakeable_int__MVInteractableBase_,
                 MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Func_System__Object__void__
                );
      pUVar5 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar5,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)pUVar4,(Func_3_Int32_MVInteractableBase_Boolean_ *)this_00
                 ,2.5,(MethodInfo *)0x0);
      (this->fields).useInteractor = pUVar5;
      pMVar1 = (this->fields).pickupObject;
      if (pMVar1 != (MVGameCoinObject *)0x0) {
        pGVar2 = (pMVar1->fields).useInteractionRotator;
        this_01 = (LevelBasedUseRequirement *)func_?(TypeInfo__LevelBasedUseRequirement);
        LevelBasedUseRequirement::LevelBasedUseRequirement__ctor(this_01,pGVar2,0,(MethodInfo *)0x0)
        ;
        pUVar5 = (this->fields).useInteractor;
        if (pUVar5 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement
                    (pUVar5,(UseRequirement *)this_01,(MethodInfo *)0x0);
          pMVar1 = (this->fields).pickupObject;
          if (pMVar1 != (MVGameCoinObject *)0x0) {
            pTVar3 = (pMVar1->fields).triggerBoxEvents;
            pUVar5 = (this->fields).useInteractor;
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)pUVar5,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar3 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
              pMVar1 = (this->fields).pickupObject;
              if (pMVar1 != (MVGameCoinObject *)0x0) {
                pTVar3 = (pMVar1->fields).triggerBoxEvents;
                pUVar5 = (this->fields).useInteractor;
                pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar4,(Object *)pUVar5,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,
                           MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                          );
                if (pTVar3 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVGameCoin(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin__ctor
               (MVGameCoin *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isVisible = 1;
  (this->fields).pickedUpStateDuration = 0.8;
  (this->fields).reshowingStateDuration = 0.5;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    pMVar1 = PrefabPool::PrefabPool_get_MVGameCoinPrefab(this_01,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)pMVar1,worldObjects,(MethodInfo *)0x0);
    pMVar1 = (MVGameCoinObject *)(this->fields)._._.component;
    if (pMVar1 == (MVGameCoinObject *)0x0) {
      pMVar2 = (MVGameCoinObject *)0x0;
    }
    else {
      bVar3 = (TypeInfo__MVGameCoinObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__MVGameCoinObject)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pMVar2 = (MVGameCoinObject *)0x0;
      if (bVar4) {
        pMVar2 = pMVar1;
      }
      if (pMVar2 == (MVGameCoinObject *)0x0) goto code_?;
    }
    piVar5 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar5 = (uint)*piVar5 | 0x200000;
    uVar6 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    (this->fields).pickupObject = pMVar2;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar6;
    if (pMVar2 != (MVGameCoinObject *)0x0) {
      pTVar7 = (pMVar2->fields).triggerBoxEvents;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        pTVar9 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
        if (pTVar9 != (Type *)0x0) {
          pSVar10 = (String *)(*(code *)(pTVar9->klass->vtable).__unknown.method)();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar10 = mscorlib.dll::System::String::String_Concat_2
                              (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar10,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar10,(MethodInfo *)0x0);
code_?:
          if ((this->fields).isVisible == 0) {
            pMVar1 = (this->fields).pickupObject;
            if ((pMVar1 == (MVGameCoinObject *)0x0) ||
               (this_00 = (pMVar1->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0))
            goto code_?;
            GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
            (this->fields).isVisible = 1;
          }
          (this->fields).state = 0;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_03 != (MVNetworkGame *)0x0) {
            this_04 = (MVGameCoinManager *)
                      TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                      TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                                ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_03,
                                 (MethodInfo *)0x0);
            if (this_04 != (MVGameCoinManager *)0x0) {
              MVGameCoinManager::MVGameCoinManager_Evaluate(this_04,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        pMVar1 = (this->fields).pickupObject;
        if (pMVar1 != (MVGameCoinObject *)0x0) {
          pTVar7 = (pMVar1->fields).triggerBoxEvents;
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)this,
                     MethodInfo__MVGameCoin__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,
                     MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                    );
          if (pTVar7 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar7,(EventHandler_1_TriggerEventArgs_ *)this_02,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVGameCoin::MVGameCoin_get_DocumentationType
          (MVGameCoin *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Coin;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_triggerBoxEvents_TriggerEnter
               (MVGameCoin *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UVar1 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
    if ((UVar1 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) &&
       (this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0),
       this_02 != (MVWorldObject *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
      TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).OnPickup.method)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

