
/* Void AddTabMenuButton(Int32, String) */

void Assembly-CSharp.dll::TabMenu::TabMenu_AddTabMenuButton
               (TabMenu *this,int32_t categoryIndex,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).tabMenuButtonPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase_
                     );
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    (*pXVar1->klass[1]._0.gc_desc)(pXVar1,categoryIndex,categoryName,pXVar1->klass[1]._0.name);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      this_00 = (this->fields).buttons;
      if (this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,categoryIndex,
                   (Object *)pXVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Add_int__TabMenuButtonBase_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SelectTab(Int32, Int32, Int32) */

void Assembly-CSharp.dll::TabMenu::TabMenu_SelectTab
               (TabMenu *this,int32_t tab,int32_t currentPage,int32_t maxPages,MethodInfo *method)

{
  pSStack_1 = (SerializationInfo *)0xffffffff;
  pIStack_2 = (IEqualityComparer_1_WinningConditionType_ *)&DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pTVar8 = (this->fields).pages;
  pLStack_9 = (Link__Array *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (pLStack_9 = (Link__Array *)&stack0xffffff98, puStack_4 = &stack0xffffff98,
     (TypeInfo__System__String->_1).cctor_started == 0)) {
    pLStack_9 = (Link__Array *)&stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    func_?(TypeInfo__System__String);
  }
  if (pTVar8 != (Text *)0x0) {
    (*(code *)(pTVar8->klass->vtable).set_text.method)
              (pTVar8,TypeInfo__System__String->static_fields->Empty,
               (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    if (1 < maxPages) {
      pTVar8 = (this->fields).pages;
      iStack_10 = currentPage;
      pWStack_11 = (WinningConditionType__Enum__Array *)
                   func_?(TypeInfo__System__Int32,&iStack_10);
      iStack_12 = maxPages;
      pOStack_13 = (Object__Array *)func_?(TypeInfo__System__Int32,&iStack_12);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar14 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0___1_,(Object *)pWStack_11,(Object *)pOStack_13,
                          (MethodInfo *)0x0);
      if (pTVar8 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar8->klass->vtable).set_text.method)
                (pTVar8,pSVar14,(pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    }
    this_00 = (this->fields).buttons;
    if (this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
      pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_16,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar15->dictionary;
      auStack_6._4_4_ = pDVar15->next;
      auStack_6._8_4_ = pDVar15->stamp;
      auStack_6._12_4_ = (pDVar15->current).key;
      auStack_6._16_4_ = (pDVar15->current).value;
      pSStack_1 = (SerializationInfo *)0x0;
      while (cVar17 = func_?(), cVar17 != '\0') {
        KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__get_Current__
                              );
        DStack_16.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        DStack_16.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabMenuButtonBase>__get_Value__
        ;
        piVar18 = (int *)func_?();
        if (piVar18 == (int *)0x0) goto code_?;
        (**(code **)(*piVar18 + 0xe8))(piVar18,*(undefined4 *)(*piVar18 + 0xec));
      }
      pTVar8 = (Text *)0x0;
      pLStack_9->klass = (Link__Array__Class *)0x7c;
      pSStack_1 = (SerializationInfo *)0xffffffff;
      func_?();
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).buttons;
      if ((this_01 !=
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0) &&
         (pTVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_01,tab,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                             ), pTVar19 != (TerrainUtility_TerrainMap *)0x0)) {
        (**(code **)&pTVar19->klass[1]._0.byval_arg.attrs)
                  (pTVar19,pTVar19->klass[1]._0.this_arg.data.dummy);
        *unaff_FS_OFFSET = iStack_3;
        return;
      }
    }
  }
code_?:
  func_?(0);
  func_?(pTVar8,0,0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* TabMenu() */

void Assembly-CSharp.dll::TabMenu::TabMenu__ctor(TabMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_TabMenuButtonBase_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Dictionary__
            );
  (this->fields).buttons = this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

