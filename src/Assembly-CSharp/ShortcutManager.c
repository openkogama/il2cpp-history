
/* Void RegisterShortcutKey(KogamaControls, KeyState, UnityAction) */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager_RegisterShortcutKey
               (ShortcutManager *this,KogamaControls__Enum kogamaControl,KeyState__Enum keyState,
               UnityAction *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ShortcutManager__ShortcutKey;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).state = keyState;
  (this_00->fields)._._._._.m_CachedPtr = (void *)kogamaControl;
  (this_00->fields).originalScale.x = (float)callback;
  pDVar1 = (this->fields).shortCutKeys;
  if (pDVar1 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]
            ::Dictionary_2_KogamaControls_System_Object__ContainsKey
                      ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,kogamaControl,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).shortCutKeys;
      this_01 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)func_?();
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
      TweenRunner_1_T_Start_c_Iterator0_FloatTween___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Stack__
                );
      if (pDVar1 == (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
      Dictionary_2_KogamaControls_System_Object__Add
                ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,kogamaControl,
                 (Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Add_KogamaControls__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>_
                );
    }
    pDVar1 = (this->fields).shortCutKeys;
    if (pDVar1 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
      this_02 = (Stack_1_ShortcutManager_ShortcutKey_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::
                Object]::Dictionary_2_KogamaControls_System_Object__get_Item
                          ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,kogamaControl,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                          );
      if (this_02 != (Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
        System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
        Stack_1_ShortcutManager_ShortcutKey__Push
                  (this_02,(ShortcutManager_ShortcutKey *)this_00,
                   MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Push_ShortcutManager__ShortcutKey_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnRegisterShortcutKey(KogamaControls, KeyState) */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager_UnRegisterShortcutKey
               (ShortcutManager *this,KogamaControls__Enum kogamaControl,KeyState__Enum keyState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).shortCutKeys;
  if (pDVar1 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]
            ::Dictionary_2_KogamaControls_System_Object__ContainsKey
                      ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,kogamaControl,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__ContainsKey_KogamaControls_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Couldn_t_find_shortcut_key,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).shortCutKeys;
    if (pDVar1 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
      this_00 = (Stack_1_ShortcutManager_ShortcutKey_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::
                Object]::Dictionary_2_KogamaControls_System_Object__get_Item
                          ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,kogamaControl,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                          );
      if (this_00 != (Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
        System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
        Stack_1_ShortcutManager_ShortcutKey__Pop
                  (this_00,
                   MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__Pop__
                  );
        pDVar1 = (this->fields).shortCutKeys;
        if (pDVar1 != (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
          this_01 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::
                    Object]::Dictionary_2_KogamaControls_System_Object__get_Item
                              ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,kogamaControl,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Item_KogamaControls_
                              );
          if (this_01 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               (this_01,
                                MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__get_Count__
                               );
            if (pOVar3 == (Object *)0x0) {
              pDVar1 = (this->fields).shortCutKeys;
              if (pDVar1 == (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::
              Object]::Dictionary_2_KogamaControls_System_Object__Remove
                        ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,kogamaControl,
                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Remove_KogamaControls_
                        );
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager_Update
               (ShortcutManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  iStack_8 = 0;
  uStack_9 = 0;
  func_?();
  iStack_10 = -1;
  puStack_11 = &stack0xffffff90;
  puStack_4 = &stack0xffffff90;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_11 = &stack0xffffff90, puStack_4 = &stack0xffffff90,
     (TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    puStack_11 = &stack0xffffff90;
    puStack_4 = &stack0xffffff90;
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar12 = MVInputWrapper::MVInputWrapper_get_IsShortcutKeysSuppressed((MethodInfo *)0x0);
  if (bVar12 == 0) {
    this_00 = (this->fields).shortCutKeys;
    if (this_00 == (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      func_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)auStack_14
               ,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__GetEnumerator__
              );
    uStack_1 = 0;
    iVar15 = -1;
    while (cVar16 = func_?(), cVar16 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&stack0xffffff9c,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__get_Current__
                            );
      this_01 = (Stack_1_EditorEvent_ *)func_?();
      if (this_01 == (Stack_1_EditorEvent_ *)0x0) goto code_?;
      pSVar17 = System.dll::System::Collections::Generic::Stack`1[EditorEvent]::
               Stack_1_EditorEvent__GetEnumerator
                         ((Stack_1_T_Enumerator_EditorEvent_ *)(auStack_14 + 8),this_01,
                          MethodInfo__System__Collections__Generic__Stack<ShortcutManager::ShortcutKey>__GetEnumerator__
                         );
      uStack_9._0_4_ = pSVar17->parent;
      uStack_9._4_4_ = pSVar17->idx;
      iStack_6 = pSVar17->_version;
      uStack_1 = CONCAT31(uStack_1._1_3_,1);
code_?:
      do {
        cVar16 = func_?(&uStack_9);
        if (cVar16 == '\0') goto code_?;
        iVar15 = func_?();
        if (iVar15 == 0) goto code_?;
        iVar18 = *(int *)(iVar15 + 0xc);
        if (iVar18 == 1) {
          KVar19 = *(KogamaControls__Enum *)(iVar15 + 8);
          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
            func_?();
          }
          bVar12 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown(KVar19,(MethodInfo *)0x0);
        }
        else if (iVar18 == 0) {
          KVar19 = *(KogamaControls__Enum *)(iVar15 + 8);
          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
            func_?();
          }
          bVar12 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KVar19,(MethodInfo *)0x0);
        }
        else {
          if (iVar18 != 2) goto code_?;
          KVar19 = *(KogamaControls__Enum *)(iVar15 + 8);
          if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
            func_?();
          }
          bVar12 = MVInputWrapper::MVInputWrapper_GetBooleanControl(KVar19,(MethodInfo *)0x0);
        }
      } while (bVar12 == 0);
      if (*(AvatarMotor_OnActiveBounceDelegate **)(iVar15 + 0x10) ==
          (AvatarMotor_OnActiveBounceDelegate *)0x0) goto code_?;
      AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                (*(AvatarMotor_OnActiveBounceDelegate **)(iVar15 + 0x10),(MethodInfo *)0x0);
code_?:
      iVar18 = iStack_10;
      iVar20 = iStack_10 + 1;
      uStack_1 = uStack_1 & 0xffffff00;
      *(undefined4 *)(puStack_11 + iVar20 * 4) = 0xdf;
      iStack_10 = iVar20;
      func_?();
      if (iStack_8 != 0) goto code_?;
      iVar15 = iVar20;
      if (((iVar20 != -1) && (*(int *)(puStack_11 + iVar20 * 4) == 0xdf)) &&
         (iVar15 = iVar18, iStack_10 = iVar18, iVar20 < 0)) {
        iVar15 = iVar20;
        iStack_10 = iVar20;
      }
    }
    *(undefined4 *)(puStack_11 + iVar15 * 4 + 4) = 0xfe;
    uStack_1 = 0xffffffff;
    func_?();
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* ShortcutManager() */

void Assembly-CSharp.dll::ShortcutManager::ShortcutManager__ctor
               (ShortcutManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_KogamaControls_Stack_1_ShortcutManager_ShortcutKey_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::Collections::Generic::Stack<ShortcutManager::ShortcutKey>_>__Dictionary__
            );
  (this->fields).shortCutKeys = this_00;
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

