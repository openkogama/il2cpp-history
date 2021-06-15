
/* Void Add(Int32) */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Add(TimeoutMap *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).weaponTimeOutMap;
  value = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
    Dictionary_2_System_Int32_System_Single__set_Item
              (this_00,id,value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Contains
               (TimeoutMap *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).weaponTimeOutMap;
  if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_float>__ContainsKey_int_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap_Update(TimeoutMap *this,MethodInfo *method)

{
  p_Stack_8 = (Il2CppMetadataTypeHandle)0xffffffff;
  pIStack_1 = (Il2CppGenericClass *)&DAT_?;
  pIStack_2 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_2;
  pIStack_3 = (Il2CppClass *)&stack0xffffff80;
  pIVar4 = (Il2CppClass *)&stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar4 = pIStack_3;
  }
  pIStack_3 = pIVar4;
  auStack_5._16_4_ = (Object *)0x0;
  pIStack_6 = (Il2CppClass *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_5._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_5._4_4_ = (MethodInfo *)0x0;
  auStack_5._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_5._12_4_ = 0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  _Stack_2c.__klassIndex = -1;
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).removeSet;
  pIStack_9 = (Il2CppClass *)&stack0xffffff80;
  pIStack_3 = (Il2CppClass *)&stack0xffffff80;
  if (this_00 == (HashSet_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    pIVar10 = (Il2CppClass *)func_?(0);
    pIVar4 = unaff_ESI;
  }
  else {
    pIStack_9 = (Il2CppClass *)&stack0xffffff80;
    pIStack_3 = (Il2CppClass *)&stack0xffffff80;
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    pDVar11 = (this->fields).weaponTimeOutMap;
    if (pDVar11 == (Dictionary_2_System_Int32_System_Single_ *)0x0) goto code_?;
    pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        (auStack_5 + 0x14),
                        (Dictionary_2_WinningConditionType_System_Object_ *)pDVar11,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                       );
    auStack_5._0_4_ = pDVar12->dictionary;
    auStack_5._4_4_ = pDVar12->next;
    auStack_5._8_4_ = pDVar12->stamp;
    auStack_5._12_4_ = (pDVar12->current).key;
    auStack_5._16_4_ = (pDVar12->current).value;
    p_Stack_8 = (Il2CppMetadataTypeHandle)0x0;
    while (cVar13 = func_?(), cVar13 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_5,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__get_Current__
                            );
      auStack_5._0_4_ = &KStack_7;
      auStack_5._4_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Value__;
      fVar14 = (float10)func_?();
      _Stack_24 = (_union_86)(this->fields).timeOut;
      fStack_15 = (float)fVar14;
      fStack_16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fStack_15 + (float)_Stack_24 <= fStack_16) {
        this_01 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this->fields).removeSet;
        item = (UnityWebRequest *)func_?();
        unaff_ESI = (Il2CppClass *)0x0;
        if (this_01 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
        goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  (this_01,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      }
    }
    unaff_ESI = (Il2CppClass *)0x0;
    pIStack_9->image = (Il2CppImage *)0x6e;
    p_Stack_8 = (Il2CppMetadataTypeHandle)0xffffffff;
    func_?();
    pIVar10 = pIStack_6;
    pIVar4 = unaff_ESI;
    if (pIStack_6 == (Il2CppClass *)0x0) {
      if (pIStack_9->image == (Il2CppImage *)0x6e) {
        unaff_ESI = (Il2CppClass *)0xffffffff;
      }
      this_02 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).removeSet;
      if (this_02 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        pHVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData
                 ::FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                           (&HStack_18,this_02,
                            MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__)
        ;
        CStack_8.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar17->hashset;
        CStack_8.monitor = (MonitorData *)pHVar17->next;
        CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar17->stamp
        ;
        CStack_8.fields.syncRoot = (Object *)pHVar17->current;
        p_Stack_8 = (Il2CppMetadataTypeHandle)0x2;
        while (cVar13 = func_?(), pIVar4 = pIStack_6, cVar13 != '\0') {
          key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_8,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                          );
          pDVar11 = (this->fields).weaponTimeOutMap;
          if (pDVar11 == (Dictionary_2_System_Int32_System_Single_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__Remove
                    (pDVar11,(int32_t)key,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Remove_int_);
        }
        (&pIStack_9->gc_desc)[(int)unaff_ESI] = (void *)0xb3;
        p_Stack_8 = (Il2CppMetadataTypeHandle)0xffffffff;
        func_?(&CStack_8,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
        if (pIVar4 == (Il2CppClass *)0x0) {
          *unaff_FS_OFFSET = pIStack_2;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(pIVar10,0,0);
code_?:
  func_?(pIVar4,0,0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* TimeoutMap(Single) */

void Assembly-CSharp.dll::TimeoutMap::TimeoutMap__ctor
               (TimeoutMap *this,float timeOut,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_System_Single_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
  (this->fields).weaponTimeOutMap = this_00;
  method_00 = TypeInfo__System__Collections__Generic__HashSet<int>;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).removeSet = (HashSet_1_System_Int32_ *)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).timeOut = timeOut;
  return;
}

