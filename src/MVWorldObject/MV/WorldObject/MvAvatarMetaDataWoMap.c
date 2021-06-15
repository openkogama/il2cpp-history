
/* Void Add(Int32, MvAvatarMetaData) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_Add
               (MvAvatarMetaDataWoMap *this,int32_t woID,MvAvatarMetaData *avatarMetaData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).avatarWOIDAvatarMetaData;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
              (this_00,woID,(TerrainUtility_TerrainMap *)avatarMetaData,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__set_Item_int__MV__WorldObject__MvAvatarMetaData_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ResetAvatar(Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_ResetAvatar
               (MvAvatarMetaDataWoMap *this,int32_t prevAvatarWoID,int32_t newAvatarWoID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).avatarWOIDAvatarMetaData;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                      (pDVar1,prevAvatarWoID,(TerrainUtility_TerrainMap **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                      );
    if (bVar2 == 0) goto code_?;
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).avatarWOIDAvatarMetaData;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                (pDVar1,prevAvatarWoID,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Remove_int_
                );
      this_00 = (this->fields).avatarWOIDAvatarMetaData;
      if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)pDVar1,
                   (Object *)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                  );
        return;
      }
    }
  }
  func_?();
code_?:
  this_01 = (ArgumentException *)func_?();
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_01,StringLiteral_AvatarWo_not_present_in_avatarWO,(MethodInfo *)0x0);
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_ToString
                   (MvAvatarMetaDataWoMap *this,MethodInfo *method)

{
  pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pDVar8 = (this->fields).avatarWOIDAvatarMetaData;
  pLStack_9 = (Link__Array *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  if (pDVar8 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
    pLStack_9 = (Link__Array *)&stack0xffffff9c;
    puStack_4 = &stack0xffffff9c;
    pOStack_10 = System.Core.dll::System::Linq::
                 Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                 KeyValuePair`2[System::Object,System::Object],System::Object]::
                 Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                             *)pDVar8,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__get_Count__
                           );
    pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_10);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar12 = mscorlib.dll::System::String::String_Format
                       (StringLiteral_Count___0__u000A,pOVar11,(MethodInfo *)0x0);
    pDVar8 = (this->fields).avatarWOIDAvatarMetaData;
    if (pDVar8 != (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0) {
      pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_14,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar8,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar13->dictionary;
      auStack_6._4_4_ = pDVar13->next;
      auStack_6._8_4_ = pDVar13->stamp;
      auStack_6._12_4_ = (pDVar13->current).key;
      auStack_6._16_4_ = (pDVar13->current).value;
      pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0x0;
      while (cVar15 = func_?(), cVar15 != '\0') {
        KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::MvAvatarMetaData>__get_Current__
                              );
        DStack_14.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        DStack_14.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MvAvatarMetaData>__get_Key__
        ;
        pOStack_16 = (Object__Array *)func_?();
        DStack_14.next = (int32_t)&pOStack_16;
        DStack_14.dictionary =
             (Dictionary_2_WinningConditionType_System_Object_ *)TypeInfo__System__Int32;
        pWStack_17 = (WinningConditionType__Enum__Array *)func_?();
        DStack_14.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        DStack_14.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MvAvatarMetaData>__get_Value__
        ;
        pOVar11 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        str1 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_WoID__0___MetaData__1__u000A,(Object *)pWStack_17,pOVar11,
                          (MethodInfo *)0x0);
        pSVar12 = mscorlib.dll::System::String::String_Concat_2(pSVar12,str1,(MethodInfo *)0x0);
      }
      pLStack_9->klass = (Link__Array__Class *)0x6e;
      pIStack_1 = (IEqualityComparer_1_WinningConditionType_ *)0xffffffff;
      func_?();
      *unaff_FS_OFFSET = iStack_3;
      return pSVar12;
    }
  }
  func_?(0);
  func_?();
  pcVar18 = (code *)swi(3);
  pSVar12 = (String *)(*pcVar18)();
  return pSVar12;
}


/* Boolean TryGetValue(Int32, MvAvatarMetaData ByRef) */

bool MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_TryGetValue
               (MvAvatarMetaDataWoMap *this,int32_t woID,MvAvatarMetaData **avatarMetaData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).avatarWOIDAvatarMetaData;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                      (this_00,woID,(TerrainUtility_TerrainMap **)avatarMetaData,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__TryGetValue_int__MV__WorldObject__MvAvatarMetaData__
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* MvAvatarMetaDataWoMap(BytePacker) */

void MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap__ctor
               (MvAvatarMetaDataWoMap *this,BytePacker *bp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>;
  pDVar1 = (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Dictionary__
            );
  (this->fields).avatarWOIDAvatarMetaData = pDVar1;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if (bp != (BytePacker *)0x0) {
    iVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        puVar4 = &UNK_?;
        iVar2 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        this_00 = (ScaleAnimationBase *)func_?();
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        (this_00->fields)._._._._.m_CachedPtr = (void *)0xffffffff;
        (this_00->fields).state = (int32_t)::StringLiteral__;
        (this_00->fields).originalScale.x = -NAN;
        Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                  (this_00,0.0,in_stack_5);
        pvVar6 = (void *)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        (this_00->fields)._._._._.m_CachedPtr = pvVar6;
        pSVar7 = BytePacker::BytePacker_ReadString(bp,(MethodInfo *)0x0);
        (this_00->fields).state = (int32_t)pSVar7;
        fVar8 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        (this_00->fields).originalScale.x = fVar8;
        bVar9 = BytePacker::BytePacker_ReadBoolean(bp,(MethodInfo *)0x0);
        *(bool *)&(this_00->fields).originalScale.y = bVar9;
        bVar9 = BytePacker::BytePacker_ReadBoolean(bp,(MethodInfo *)0x0);
        *(bool *)((int)&(this_00->fields).originalScale.y + 1) = bVar9;
        pDVar1 = (this->fields).avatarWOIDAvatarMetaData;
        if (pDVar1 == (Dictionary_2_System_Int32_MV_WorldObject_MvAvatarMetaData_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,iVar2,(Object *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MvAvatarMetaData>__Add_int__MV__WorldObject__MvAvatarMetaData_
                  );
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)puVar4);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

