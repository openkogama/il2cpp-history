
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
    this = (MVGamePointChest *)0x0;
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
  this = (MVGamePointChest *)0x0;
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
  key = (MVGamePointChest *)
        func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,(int)&prototypes + 3);
  if (in_stack_10 != 0) {
    cloneGroupId = (int32_t)&this;
    ownerActorNumber = (int32_t)TypeInfo__System__Int32;
    this = (MVGamePointChest *)&UNK_?;
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
      this = (MVGamePointChest *)&UNK_?;
      pSVar6 = (String *)func_?();
      this = (MVGamePointChest *)&stack0xfffffffc;
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
          this = (MVGamePointChest *)&UNK_?;
          func_?();
        }
        ownerActorNumber = 0;
        this = (MVGamePointChest *)&UNK_?;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          cloneGroupId = 0;
          this = (MVGamePointChest *)pMVar1;
          ownerActorNumber = (int32_t)pMVar3;
          MVNetworkGame::MVNetworkGame_AddCloneToWorldObjects(pMVar1,pMVar3,(MethodInfo *)0x0);
          cloneGroupId = 0;
          ownerActorNumber = *(undefined4 *)(in_stack_10 + 0x14);
          this = (MVGamePointChest *)this_00;
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
                    ((MVWorldObject *)this_00,(List_1_System_Int32_ *)ownerActorNumber,
                     (MethodInfo *)0x0);
          cloneGroupId = 0;
          ownerActorNumber = *(undefined4 *)(in_stack_10 + 0x18);
          this = (MVGamePointChest *)this_00;
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
Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_DeepCopy
          (MVGamePointChest *this,MethodInfo *method)

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
    this = (MVGamePointChest *)0x0;
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
  this = (MVGamePointChest *)0x0;
  MVGameCoinManager::MVGameCoinManager_Evaluate(this_01,(MethodInfo *)0x0);
  uStack3 = 0xffffffff;
  method = (MethodInfo *)&DAT_?;
  this = (MVGamePointChest *)*unaff_FS_OFFSET;
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

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Destroy
               (MVGamePointChest *this,MethodInfo *method)

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
          MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
                    ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
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
                     MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_,
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
        pMVar8 = (this->fields).chestObject;
        if (pMVar8 != (MVGamePointChestObject *)0x0) {
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
            pMVar8 = (this->fields).chestObject;
            if (pMVar8 != (MVGamePointChestObject *)0x0) {
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


/* Void Disable() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Disable
               (MVGamePointChest *this,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  (this->fields).state = 2;
  if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
     (this_00 = (pMVar1->fields).modelSelector, this_00 != (GamePointChestModelController *)0x0)) {
    GamePointChestModelController::GamePointChestModelController_Disable(this_00,(MethodInfo *)0x0);
    (this->fields).canRespawn = 0;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVGamePointChest *this,float gridSize,
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
                     ((Vector3 *)&stack0xffffffe4,*pVVar1,2.6,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  this_00 = (this->fields)._._._.gameObject;
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


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVGamePointChest *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
     (pTVar2 = (pMVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar2,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                ((Vector3 *)&pBStack_4,pTVar3,(MethodInfo *)0x0);
      pMVar1 = (this->fields).chestObject;
      if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
         (pTVar2 = (pMVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pTVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                    ((Vector3 *)&pBStack_4,pTVar3,(MethodInfo *)0x0);
          (__return_storage_ptr__->m_Center).x = 0.0;
          (__return_storage_ptr__->m_Center).y = 0.0;
          (__return_storage_ptr__->m_Center).z = 0.0;
          (__return_storage_ptr__->m_Extents).x = 0.0;
          (__return_storage_ptr__->m_Extents).y = 0.0;
          (__return_storage_ptr__->m_Extents).z = 0.0;
          pBStack_4 = __return_storage_ptr__;
          func_?();
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pBVar6 = (Bounds *)(*pcVar5)();
  return pBVar6;
}


/* Boolean HandleDifferentChestSizeStages(Single) */

bool Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_HandleDifferentChestSizeStages
               (MVGamePointChest *this,float percentage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (percentage * _UNK_? < (float)(this->fields).gamePointsRewarded) {
    return 0;
  }
  this_00 = (this->fields)._._._.transform;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,*pVVar1,percentage,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    this = (MVGamePointChest *)pVVar1->z;
    fVar4 = (float)uVar3;
    value.x = (float)uVar2;
    value = (Vector3)CONCAT84(uVar5,value.x);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void HandleStandaloneDisabling() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_HandleStandaloneDisabling
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      pMVar2 = (this->fields).chestObject;
      (this->fields).state = 2;
      if ((pMVar2 == (MVGamePointChestObject *)0x0) ||
         (this_00 = (pMVar2->fields).modelSelector, this_00 == (GamePointChestModelController *)0x0)
         ) goto code_?;
      GamePointChestModelController::GamePointChestModelController_Disable
                (this_00,(MethodInfo *)0x0);
      (this->fields).canRespawn = 0;
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Initialize
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGamePointChest_UpdateGamePointsRewardedAmount(this,(MethodInfo *)0x0);
  MVGamePointChest_UpdateChestSize(this,(MethodInfo *)0x0);
  MVGamePointChest_SetupUseInteractor(this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,pDVar1,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
    pMVar2 = (this->fields).chestObject;
    if (pMVar2 != (MVGamePointChestObject *)0x0) {
      MVLogicObject::MVLogicObject_SetupCulling
                ((MVLogicObject *)this,(pMVar2->fields).visualObject,5.0,(MethodInfo *)0x0);
      MVGamePointChest_HandleStandaloneDisabling(this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        pAVar4 = (pMVar3->fields).OnWinningConditionFulfilled;
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVGamePointChest__OnWinningConditionFulfilled_IWinningCondition_,
                   MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
        pAVar5 = (Action_1_IWinningCondition_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
        pAVar4 = (Action_1_IWinningCondition_ *)0x0;
        if (pAVar5 == (Action_1_IWinningCondition_ *)0x0) {
code_?:
          (pMVar3->fields).OnWinningConditionFulfilled = pAVar4;
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                   PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
          MVGamePointChest_UpdateCanRespawn(this,pDVar1,(MethodInfo *)0x0);
          return;
        }
        if (pAVar5->klass == TypeInfo__System__Action<IWinningCondition>) {
          pAVar4 = pAVar5;
        }
        if (pAVar4 != (Action_1_IWinningCondition_ *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_InitializeInventory
               (MVGamePointChest *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).chestObject;
  if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
     ((pMVar1->fields).modelSelector != (GamePointChestModelController *)0x0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?,unaff_retaddr);
      cRam_? = '\x01';
    }
    if (*(GameObject **)(in_stack_2 + 0x10) != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(in_stack_2 + 0x10),0,(MethodInfo *)0x0);
      if (*(GameObject **)(in_stack_2 + 0xc) != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(in_stack_2 + 0xc),1,(MethodInfo *)0x0);
        *(undefined1 *)(in_stack_2 + 0x29) = 0;
        if (*(Renderer **)(in_stack_2 + 0x18) != (Renderer *)0x0) {
          pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (*(Renderer **)(in_stack_2 + 0x18),(MethodInfo *)0x0);
          if (pMVar3 != (Material *)0x0) {
            pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                               ((Color *)&stack0xffffffe4,pMVar3,StringLiteral__MainColor,
                                (MethodInfo *)0x0);
            fVar5 = pCVar4->r;
            fVar6 = pCVar4->g;
            fVar7 = pCVar4->b;
            if (*(Renderer **)(in_stack_2 + 0x18) != (Renderer *)0x0) {
              pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                 (*(Renderer **)(in_stack_2 + 0x18),(MethodInfo *)0x0);
              if (pMVar3 != (Material *)0x0) {
                value.y = fVar6;
                value.x = fVar5;
                value.z = fVar7;
                value.w = 1.0;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                          (pMVar3,StringLiteral__MainColor,value,(MethodInfo *)0x0);
                if (*(GreyOutObjectScript **)(in_stack_2 + 0x1c) !=
                    (GreyOutObjectScript *)0x0) {
                  GreyOutObjectScript::GreyOutObjectScript_GreyIn
                            (*(GreyOutObjectScript **)(in_stack_2 + 0x1c),(MethodInfo *)0x0);
                  if (*(Component_1 **)(in_stack_2 + 0x1c) != (Component_1 *)0x0) {
                    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_gameObject
                                        (*(Component_1 **)(in_stack_2 + 0x1c),
                                         (MethodInfo *)0x0);
                    if (this_00 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (this_00,1,(MethodInfo *)0x0);
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
    func_?(0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  this_00 = (this->fields).useInteractor;
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,pDVar1,(MethodInfo *)0x0);
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
              ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    MVGamePointChest_UpdateCanRespawn(this,pDVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_OnUpdate
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).state;
  if (iVar1 != 1) {
code_?:
    if (((this->fields).canRespawn != 0) && (iVar1 == 2)) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((float)(this->fields).respawnTime + (this->fields).pickUpTime < fVar2) {
        (*(code *)(this->klass->vtable).Reset.method)
                  (this,(this->klass->vtable).OnObjectLinkChanged.methodPtr);
      }
    }
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if (this_03 != (MVLocalPlayer *)0x0) {
      MVPlayer::MVPlayer_get_WoId((MVPlayer *)this_03,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pMVar3 = (this->fields).chestObject;
      if ((pMVar3 != (MVGamePointChestObject *)0x0) &&
         (this_00 = (pMVar3->fields).modelSelector, this_00 != (GamePointChestModelController *)0x0)
         ) {
        GamePointChestModelController::GamePointChestModelController_Open(this_00,(MethodInfo *)0x0)
        ;
        pMVar3 = (this->fields).chestObject;
        if (pMVar3 != (MVGamePointChestObject *)0x0) {
          pAVar4 = (pMVar3->fields).audioSource;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)pAVar4,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pMVar3 = (this->fields).chestObject;
            if ((pMVar3 == (MVGamePointChestObject *)0x0) ||
               (pAVar4 = (pMVar3->fields).audioSource, pAVar4 == (AudioSource *)0x0))
            goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                      (pAVar4,(MethodInfo *)0x0);
          }
          pMVar3 = (this->fields).chestObject;
          if ((pMVar3 != (MVGamePointChestObject *)0x0) &&
             (this_01 = (pMVar3->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0))
          {
            ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0)
            ;
            (this->fields).state = 2;
            iVar1 = 2;
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_OnWinningConditionFulfilled
               (MVGamePointChest *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).Reset.method)
            (this,(this->klass->vtable).OnObjectLinkChanged.methodPtr);
  return;
}


/* Boolean OpenChest(Int32) */

bool Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_OpenChest
               (MVGamePointChest *this,int32_t instigatorID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).chestObject;
  if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
     (this_00 = (pMVar1->fields).modelSelector, this_00 != (GamePointChestModelController *)0x0)) {
    GamePointChestModelController::GamePointChestModelController_Open(this_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields).chestObject;
    if (pMVar1 != (MVGamePointChestObject *)0x0) {
      pAVar2 = (pMVar1->fields).audioSource;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pAVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields).chestObject;
        if ((pMVar1 == (MVGamePointChestObject *)0x0) ||
           (pAVar2 = (pMVar1->fields).audioSource, pAVar2 == (AudioSource *)0x0))
        goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar2,(MethodInfo *)0x0);
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
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_Reset
               (MVGamePointChest *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  iVar1 = (this->fields).state;
  if ((iVar1 == 2) || (iVar1 == 1)) {
    pMVar2 = (this->fields).chestObject;
    if ((pMVar2 == (MVGamePointChestObject *)0x0) ||
       (this_00 = (pMVar2->fields).modelSelector, this_00 == (GamePointChestModelController *)0x0))
    {
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    GamePointChestModelController::GamePointChestModelController_Close(this_00,(MethodInfo *)0x0);
    (this->fields).state = 0;
  }
  MVGamePointChest_HandleStandaloneDisabling(this,(MethodInfo *)0x0);
  return;
}


/* Void SetToClosed() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_SetToClosed
               (MVGamePointChest *this,MethodInfo *method)

{
  iVar1 = (this->fields).state;
  if ((iVar1 == 2) || (iVar1 == 1)) {
    pMVar2 = (this->fields).chestObject;
    if ((pMVar2 == (MVGamePointChestObject *)0x0) ||
       (this_00 = (pMVar2->fields).modelSelector, this_00 == (GamePointChestModelController *)0x0))
    {
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).chestObject;
  if (pMVar1 != (MVGamePointChestObject *)0x0) {
    pGVar2 = (pMVar1->fields).useInteractionRotator;
    pTVar3 = (pMVar1->fields).triggerBoxEvents;
    if (pTVar3 != (TriggerBoxEvents *)0x0) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar3,(MethodInfo *)0x0);
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Func<int,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__MVGamePointChest__OpenChest_int_,
                 MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVGamePointChest__IsUsable_int__MVInteractableBase_,
                 MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Func_System__Object__void__
                );
      pUVar5 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar5,(MVWorldObjectClient *)this,pGVar2,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)pUVar4,(Func_3_Int32_MVInteractableBase_Boolean_ *)this_00
                 ,2.5,(MethodInfo *)0x0);
      (this->fields).useInteractor = pUVar5;
      pMVar1 = (this->fields).chestObject;
      if (pMVar1 != (MVGamePointChestObject *)0x0) {
        pGVar2 = (pMVar1->fields).useInteractionRotator;
        this_01 = (LevelBasedUseRequirement *)func_?(TypeInfo__LevelBasedUseRequirement);
        LevelBasedUseRequirement::LevelBasedUseRequirement__ctor(this_01,pGVar2,0,(MethodInfo *)0x0)
        ;
        pUVar5 = (this->fields).useInteractor;
        if (pUVar5 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement
                    (pUVar5,(UseRequirement *)this_01,(MethodInfo *)0x0);
          pMVar1 = (this->fields).chestObject;
          if (pMVar1 != (MVGamePointChestObject *)0x0) {
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
              pMVar1 = (this->fields).chestObject;
              if (pMVar1 != (MVGamePointChestObject *)0x0) {
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


/* Void UpdateCanRespawn(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_UpdateCanRespawn
               (MVGamePointChest *this,Dictionary_2_System_Object_System_Object_ *newData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newData,StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    (this->fields).canRespawn = bVar1;
    if (bVar1 != 0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newData,
                          (Type *)StringLiteral_respawnTime,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 == (Pool *)0x0) goto code_?;
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?();
      (this->fields).respawnTime = *piVar3;
    }
    pMVar4 = (this->fields).chestObject;
    if ((pMVar4 != (MVGamePointChestObject *)0x0) &&
       (this_00 = (pMVar4->fields).modelSelector, this_00 != (GamePointChestModelController *)0x0))
    {
      GamePointChestModelController::GamePointChestModelController_set_ShouldGreyOut
                (this_00,(this->fields).canRespawn,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateChestSize() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_UpdateChestSize
               (MVGamePointChest *this,MethodInfo *method)

{
  d = 0.0;
  cVar1 = cRam_?;
  while( true ) {
    if (cVar1 == '\0') {
      func_?(_UNK_?);
      cVar1 = '\x01';
      cRam_? = '\x01';
    }
    if ((float)(this->fields).gamePointsRewarded <= d * _UNK_?) break;
    d = d + _UNK_?;
    if (_UNK_? < d) {
      return;
    }
  }
  this_00 = (this->fields)._._._.transform;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffec,*pVVar2,d,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,*pVVar2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateGamePointsRewardedAmount() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_UpdateGamePointsRewardedAmount
               (MVGamePointChest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      (this->fields).gamePointsRewarded = 0x1e;
      return;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPStack2 =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_01,(Type *)StringLiteral_gamePointAmount,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      uVar3 = CONCAT44(TypeInfo__System__Int32,pPStack2);
      if (pPStack2 != (Pool *)0x0) {
        if ((pPStack2->klass->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar4 = (int32_t *)func_?();
          (this->fields).gamePointsRewarded = *piVar4;
          return;
        }
        goto code_?;
      }
    }
  }
  pPStack2 = (Pool *)0x0;
  uVar3 = func_?();
code_?:
  _puStack00000018 = uVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVGamePointChest() */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).gamePointsRewarded = 0x1e;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = PrefabPool::PrefabPool_get_GamePointChestPrefab(this_00,(MethodInfo *)0x0);
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0
              );
    piVar1 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar1 = (uint)*piVar1 | 0x8000;
    puVar2 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
    *puVar2 = *puVar2 | 1;
    pMVar3 = (MVGamePointChestObject *)(this->fields)._._._.component;
    if (pMVar3 == (MVGamePointChestObject *)0x0) {
      pMVar4 = (MVGamePointChestObject *)0x0;
    }
    else {
      bVar5 = (TypeInfo__MVGamePointChestObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar5) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[bVar5 - 1] !=
          (Il2CppClass *)TypeInfo__MVGamePointChestObject)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pMVar4 = (MVGamePointChestObject *)0x0;
      if (bVar6) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVGamePointChestObject *)0x0) goto code_?;
    }
    (this->fields).chestObject = pMVar4;
    if (pMVar4 != (MVGamePointChestObject *)0x0) {
      pTVar7 = (pMVar4->fields).triggerBoxEvents;
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
          newData = (Dictionary_2_System_Object_System_Object_ *)
                    PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0)
          ;
          MVGamePointChest_UpdateCanRespawn(this,newData,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pMVar3 = (this->fields).chestObject;
        if (pMVar3 != (MVGamePointChestObject *)0x0) {
          pTVar7 = (pMVar3->fields).triggerBoxEvents;
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVGamePointChest__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,
                     MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                    );
          if (pTVar7 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar7,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  if ((pMVar1 == (MVGamePointChestObject *)0x0) ||
     (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 == (GamePointChestModelController *)0x0)) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  pGVar5 = (pGVar2->fields).openMesh;
  if (pGVar5 != (GameObject *)0x0) {
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar5,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return 1;
    }
    pGVar5 = (pGVar2->fields).closedMesh;
    if (pGVar5 != (GameObject *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar5,(MethodInfo *)0x0);
      return bVar4 == 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_set_Visible
               (MVGamePointChest *this,bool value,MethodInfo *method)

{
  pMVar1 = (this->fields).chestObject;
  if ((this->fields).state == 0) {
    if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
       (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GamePointChestModelController *)0x0)) {
      GamePointChestModelController::GamePointChestModelController_Close(pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((pMVar1 != (MVGamePointChestObject *)0x0) &&
          (pGVar2 = (pMVar1->fields).modelSelector, pGVar2 != (GamePointChestModelController *)0x0))
  {
    GamePointChestModelController::GamePointChestModelController_Open(pGVar2,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVGamePointChest::MVGamePointChest_triggerBoxEvents_TriggerEnter
               (MVGamePointChest *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).state == 0) {
    this_00 = (this->fields).useInteractor;
    if (this_00 == (UseInteractor *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UVar2 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGamePointChest->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGamePointChest->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGamePointChest);
    }
    if ((TypeInfo__MVGamePointChest->static_fields->purchaseOptions & UVar2) == 0) {
      (this->fields).state = 1;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      triggerBoxOwnerId =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      if ((e == (TriggerEventArgs *)0x0) || (this_01 == (MVNetworkGame_OperationRequests *)0x0))
      goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                (this_01,(int32_t)triggerBoxOwnerId,(e->fields).instigatorWOID,(MethodInfo *)0x0);
      amountOfGamePoints = (this->fields).gamePointsRewarded;
      if ((((uint)(TypeInfo__FakeGamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__FakeGamePointGainEffectManager->_1).cctor_started == 0)) {
        func_?();
      }
      FakeGamePointGainEffectManager::FakeGamePointGainEffectManager_FakeGainEffect
                (amountOfGamePoints,(MethodInfo *)0x0);
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).pickUpTime = fVar3;
    }
  }
  return;
}

