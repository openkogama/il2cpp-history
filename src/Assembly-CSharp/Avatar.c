
/* Boolean HasModifierEffect(AvatarModifierEffect) */

bool Assembly-CSharp.dll::Avatar::Avatar_1_HasModifierEffect
               (Avatar_1 *this,AvatarModifierEffect__Enum modifierEffect,MethodInfo *method)

{
  pBVar1 = (this->fields).modifierEffectCount;
  if (pBVar1 == (Byte__Array *)0x0) {
    func_?(0);
  }
  else if (modifierEffect < pBVar1->max_length) {
    return pBVar1->vector[modifierEffect] != 0;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Initialize(MVAvatar, Boolean) */

void Assembly-CSharp.dll::Avatar::Avatar_1_Initialize
               (Avatar_1 *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarFader;
  (this->fields).mvAvatar = mvAvatar;
  if (mvAvatar != (MVAvatar *)0x0) {
    this_03 = (PrefabPool *)MVAvatar::MVAvatar_get_Body(mvAvatar,(MethodInfo *)0x0);
    if (this_03 != (PrefabPool *)0x0) {
      value = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_03,(MethodInfo *)0x0);
      if (this_00 != (AvatarFader *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
        ObjectPool_1_System_Object__set_countAll
                  ((ObjectPool_1_System_Object_ *)this_00,(int32_t)value,(MethodInfo *)0x0);
        (this->fields).isLocal = isLocal;
        pIVar1 = (InteractionDataHandlerBase *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                           ((Component_1 *)this,
                            InteractionDataHandlerBase_MethodInfo__UnityEngine__Component__GetComponent<InteractionDataHandlerBase>__
                           );
        (this->fields).interactionDataHandler = pIVar1;
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                           ((Component_1 *)this,
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           );
        this_01 = (this->fields).avatarLevelUp;
        (this->fields).avatarCollider = (Collider *)pMVar2;
        ownerActorNr = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                       TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                       TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                 ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)mvAvatar,
                                  (MethodInfo *)0x0);
        if (this_01 != (AvatarLevelUp *)0x0) {
          AvatarLevelUp::AvatarLevelUp_Init(this_01,(int32_t)ownerActorNr,(MethodInfo *)0x0);
          pWVar3 = (this->fields).waterSplashComponent;
          if (pWVar3 != (WaterSplashComponent *)0x0) {
            (*(code *)(pWVar3->klass->vtable).Initialize.method)();
            pAVar4 = (this->fields).avatarUIHandler;
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
            TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
            TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                      ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)mvAvatar,(MethodInfo *)0x0);
            if (pAVar4 != (AvatarUIHandler *)0x0) {
              (*(code *)(pAVar4->klass->vtable).Initialize.method)();
              this_02 = (this->fields).chatBubbleAnchor;
              if (this_02 != (ChatAnchor *)0x0) {
                ChatAnchor::ChatAnchor_Initialize(this_02,isLocal,this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::Avatar::Avatar_1_OnEnterVehicle(Avatar_1 *this,MethodInfo *method)

{
  this_00 = (this->fields).waterSplashComponent;
  if (this_00 != (WaterSplashComponent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnExitVehicle() */

void Assembly-CSharp.dll::Avatar::Avatar_1_OnExitVehicle(Avatar_1 *this,MethodInfo *method)

{
  this_00 = (this->fields).waterSplashComponent;
  if (this_00 != (WaterSplashComponent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartBlinking(BlinkType, Single) */

void Assembly-CSharp.dll::Avatar::Avatar_1_StartBlinking
               (Avatar_1 *this,BlinkType__Enum type,float duration,MethodInfo *method)

{
  this_00 = (this->fields).mvAvatar;
  if (this_00 != (MVAvatar *)0x0) {
    this_01 = MVAvatar::MVAvatar_get_Body(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVBody *)0x0) {
      MVBody::MVBody_StartBlinking(this_01,type,duration,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StopBlinking(BlinkType) */

void Assembly-CSharp.dll::Avatar::Avatar_1_StopBlinking
               (Avatar_1 *this,BlinkType__Enum type,MethodInfo *method)

{
  this_01 = (this->fields).mvAvatar;
  if (this_01 != (MVAvatar *)0x0) {
    pMVar1 = MVAvatar::MVAvatar_get_Body(this_01,(MethodInfo *)0x0);
    if (pMVar1 != (MVBody *)0x0) {
      if ((iRam_? != 0) && (iVar2 = *(int *)(iRam_? + 0x1c), iVar2 != 0)) {
        uStack3 = 0;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = *(Dictionary_2_BlinkType_System_Object_ **)(iVar2 + 0x1c);
        if (this_00 != (Dictionary_2_BlinkType_System_Object_ *)0x0) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::
                   Object]::Dictionary_2_BlinkType_System_Object__get_Item
                             (this_00,in_stack_5,
                              MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                             );
          if (pOVar4 != (Object *)0x0) {
            pOVar4[2].klass = (Object__Class *)0x0;
            pOVar4[1].monitor = (MonitorData *)0x0;
            return;
          }
        }
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateModifiers(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Avatar::Avatar_1_UpdateModifiers
               (Avatar_1 *this,Dictionary_2_System_Object_System_Object_ *newModifiers,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffeec;
  puVar5 = &stack0xfffffeec;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  LStack_8.fields.OnRewardsReturned = (Action *)0x0;
  iStack_9 = 0;
  iStack_10 = 0;
  iStack_11 = 0;
  LStack_8.fields._NextReward_k__BackingField.value = 0;
  LStack_8.klass = (LevelRewardsManager__Class *)0x0;
  LStack_8.monitor = (MonitorData *)0x0;
  LStack_8.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  LStack_8.fields._NextReward_k__BackingField.key = 0;
  pCStack_12 = (Char__Array *)0x0;
  func_?();
  pMStack_13 = (MethodInfo *)0xffffffff;
  piStack_14 = (int *)&stack0xfffffeec;
  puStack_4 = &stack0xfffffeec;
  trimChars = (Char__Array *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<AvatarModifierPackageType>
                             );
  pCStack_15 = trimChars;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)trimChars,
             MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__List__);
  pDVar16 = (this->fields).modifiers;
  pCStack_17 = trimChars;
  if (pDVar16 != (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0) {
    method_01 = (Char__Array *)&UNK_?;
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                        ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar16,
                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Keys__
                        );
    if (this_00 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0
       ) {
      pDVar18 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                           *)auStack_19,
                          (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                           *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_AvatarModifier>__GetEnumerator__
                         );
      LStack_8.fields.OnRewardsReturned = (Action *)(pDVar18->host_enumerator).dictionary;
      iStack_9 = (pDVar18->host_enumerator).next;
      iStack_10 = (pDVar18->host_enumerator).stamp;
      iStack_11 = (pDVar18->host_enumerator).current.key;
      pOStack_6 = (pDVar18->host_enumerator).current.value;
      uStack_1 = 0;
      while (cVar20 = func_?(), cVar20 != '\0') {
        pCStack_21 = (Char__Array *)func_?();
        trimChars = (Char__Array *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        method_01 = trimChars;
        pSVar22 = mscorlib.dll::System::String::String_Concat
                            ((Object *)::StringLiteral__,(Object *)trimChars,(MethodInfo *)0x0);
        if (newModifiers == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        bVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                            *)newModifiers,pSVar22,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        pIVar24 = TypeRef__AvatarModifierPackageType;
        if (bVar23 == 0) {
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?();
          }
          pTStack_25 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                 ((RuntimeTypeHandle)pIVar24,(MethodInfo *)0x0);
          trimChars = (Char__Array *)func_?();
          if ((trimChars == (Char__Array *)0x0) || (func_?(), pSVar22 == (String *)0x0))
          goto code_?;
          pSVar22 = mscorlib.dll::System::String::String_TrimStart
                              (pSVar22,trimChars,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
            func_?();
          }
          mscorlib.dll::System::Enum::Enum_Parse(pTStack_25,pSVar22,(MethodInfo *)0x0);
          pUVar26 = (UIPushOption__Enum *)func_?();
          trimChars = (Char__Array *)0x0;
          if (pCStack_15 == (Char__Array *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pCStack_15,*pUVar26,
                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
                    );
        }
      }
      *piStack_14 = 0x8f;
      pTStack_25 = (Type *)0x0;
      uStack_1 = 0xffffffff;
      func_?();
      if (*piStack_14 == 0x8f) {
        pTStack_25 = (Type *)0xffffffff;
      }
      pCStack_21 = (Char__Array *)0x0;
      trimChars = (Char__Array *)0x0;
      if (pCStack_15 != (Char__Array *)0x0) {
        for (; trimChars = pCStack_21,
            pOVar27 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                 pCStack_15,
                                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Count__
                                ), (int)trimChars < (int)pOVar27;
            pCStack_21 = (Char__Array *)
                         ((int)&pCStack_21->klass + AvatarModifierPackageType__Enum_Fire)) {
          AVar28 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackageType]::
                   List_1_AvatarModifierPackageType__get_Item
                             ((List_1_AvatarModifierPackageType_ *)pCStack_15,(int32_t)trimChars,
                              MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Item_int_
                             );
          pDVar16 = (this->fields).modifiers;
          trimChars = (Char__Array *)this;
          if ((pDVar16 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0) ||
             (this_01 = (AvatarModifier *)
                        mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[AvatarModifierPackageType,System::Object]::
                        Dictionary_2_AvatarModifierPackageType_System_Object__get_Item
                                  ((Dictionary_2_AvatarModifierPackageType_System_Object_ *)pDVar16,
                                   AVar28,
                                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                                  ), this_01 == (AvatarModifier *)0x0)) goto code_?;
          AvatarModifier::AvatarModifier_Deactivate(this_01,this,(MethodInfo *)method_01);
          pDVar16 = (this->fields).modifiers;
          if (pDVar16 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
          goto code_?;
          method_01 = (Char__Array *)&UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarModifierPackageType,System
          ::Object]::Dictionary_2_AvatarModifierPackageType_System_Object__Remove
                    ((Dictionary_2_AvatarModifierPackageType_System_Object_ *)pDVar16,AVar28,
                     MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Remove_AvatarModifierPackageType_
                    );
          pDVar29 = (this->fields).currentModifierByteState;
          if (pDVar29 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarModifierPackageType,System
          ::Byte]::Dictionary_2_AvatarModifierPackageType_System_Byte__Remove
                    (pDVar29,AVar28,
                     MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Remove_AvatarModifierPackageType_
                    );
          if ((((uint)(TypeInfo__AvatarModifierPackageFactory->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_started == 0)) {
            func_?();
          }
          pAVar30 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                              ((AvatarModifierPackage *)&stack0xfffffef8,AVar28,(MethodInfo *)0x0);
          trimChars = (Char__Array *)0x0;
          pAVar31 = pAVar30->avatarModifiers;
          while( true ) {
            if (pAVar31 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
            if ((int)pAVar31->max_length <= (int)trimChars) break;
            pMStack_13 = (MethodInfo *)(this->fields).modifierEffectCount;
            func_?();
            if (pMStack_13 == (MethodInfo *)0x0) goto code_?;
            pcVar32 = (char *)func_?();
            *pcVar32 = *pcVar32 + -1;
            trimChars = (Char__Array *)
                        ((int)&trimChars->klass + AvatarModifierPackageType__Enum_Fire);
          }
        }
        if (newModifiers != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar33 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[WinningConditionType,System::Object]::
                    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                                *)auStack_19,
                               (Dictionary_2_WinningConditionType_System_Object_ *)newModifiers,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                              );
          LStack_8.klass = (LevelRewardsManager__Class *)pDVar33->dictionary;
          LStack_8.monitor = (MonitorData *)pDVar33->next;
          LStack_8.fields.unseenLevelRewards =
               (Dictionary_2_System_Int32_System_Int32_ *)pDVar33->stamp;
          LStack_8.fields._NextReward_k__BackingField.key = (pDVar33->current).key;
          LStack_8.fields._NextReward_k__BackingField.value = (int32_t)(pDVar33->current).value;
          uStack_1 = 2;
          while (cVar20 = func_?(&LStack_8,
                                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                        ), trimChars = pCStack_12, cVar20 != '\0') {
            KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                  (&LStack_8,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                  );
            uVar34 = func_?(&KStack_7,
                                     MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                                    );
            pMStack_13 = (MethodInfo *)func_?(uVar34,TypeInfo__System__String);
            pIVar24 = TypeRef__AvatarModifierPackageType;
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Type);
            }
            pCStack_17 = (Char__Array *)
                         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                   ((RuntimeTypeHandle)pIVar24,(MethodInfo *)0x0);
            trimChars = (Char__Array *)func_?(TypeInfo__System__Char);
            if ((trimChars == (Char__Array *)0x0) ||
               (func_?(), pMStack_13 == (MethodInfo *)0x0)) goto code_?;
            pSVar22 = mscorlib.dll::System::String::String_TrimStart
                                ((String *)pMStack_13,trimChars,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::Enum::Enum_Parse((Type *)pCStack_17,pSVar22,(MethodInfo *)0x0);
            pAVar35 = (AvatarModifierPackageType__Enum *)func_?();
            trimChars = (Char__Array *)*pAVar35;
            pDVar16 = (this->fields).modifiers;
            pCStack_21 = trimChars;
            if (pDVar16 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
            goto code_?;
            bVar23 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[AvatarModifierPackageType,System::Object]::
                    Dictionary_2_AvatarModifierPackageType_System_Object__ContainsKey
                              ((Dictionary_2_AvatarModifierPackageType_System_Object_ *)pDVar16,
                               (AvatarModifierPackageType__Enum)trimChars,
                               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__ContainsKey_AvatarModifierPackageType_
                              );
            if (bVar23 == 0) {
              method_00 = this;
              trimChars = (Char__Array *)
                          AvatarModifier::AvatarModifier_CreateFromType
                                    ((AvatarModifierPackageType__Enum)trimChars,this,
                                     (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              bVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)trimChars,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar23 != 0) {
                if (trimChars == (Char__Array *)0x0) goto code_?;
                cVar20 = func_?();
                if (cVar20 == '\0') {
                  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)trimChars,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                            ((Object_1 *)obj,(MethodInfo *)0x0);
                }
                else {
                  pMStack_13 = (MethodInfo *)
                               UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_transform((Component_1 *)trimChars,(MethodInfo *)0x0)
                  ;
                  value = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                  if (pMStack_13 == (MethodInfo *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                            ((Transform *)pMStack_13,value,(MethodInfo *)method_00);
                  pMStack_13 = (MethodInfo *)
                               UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_transform((Component_1 *)trimChars,(MethodInfo *)0x0)
                  ;
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                      ((Vector3 *)(auStack_19 + 8),(MethodInfo *)0x0);
                  if (pMStack_13 == (MethodInfo *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            ((Transform *)pMStack_13,*pVVar36,(MethodInfo *)0x0);
                  pDVar16 = (this->fields).modifiers;
                  if (pDVar16 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
                  goto code_?;
                  mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[AvatarModifierPackageType,System::Object]::
                  Dictionary_2_AvatarModifierPackageType_System_Object__Add
                            ((Dictionary_2_AvatarModifierPackageType_System_Object_ *)pDVar16,
                             (AvatarModifierPackageType__Enum)pCStack_21,(Object *)trimChars,
                             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Add_AvatarModifierPackageType__AvatarModifier_
                            );
                  pCStack_15 = (Char__Array *)(this->fields).currentModifierByteState;
                  func_?();
                  if (pCStack_15 == (Char__Array *)0x0) goto code_?;
                  pMStack_13 = 
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Add_AvatarModifierPackageType__unsigned_char_
                  ;
                  puVar37 = (uint8_t *)func_?();
                  _uStack_44 = CONCAT31(uStack_38,*puVar37);
                  mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[AvatarModifierPackageType,System::Byte]::
                  Dictionary_2_AvatarModifierPackageType_System_Byte__Add
                            ((Dictionary_2_AvatarModifierPackageType_System_Byte_ *)pCStack_15,
                             (AvatarModifierPackageType__Enum)pCStack_21,*puVar37,pMStack_13);
                  AvatarModifier::AvatarModifier_Activate
                            ((AvatarModifier *)trimChars,this,(MethodInfo *)0x0);
                  AVar28 = func_?();
                  if ((((uint)(TypeInfo__AvatarModifierPackageFactory->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pAVar30 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                                      ((AvatarModifierPackage *)&stack0xfffffef8,AVar28,
                                       (MethodInfo *)0x0);
                  trimChars = (Char__Array *)0x0;
                  pAVar31 = pAVar30->avatarModifiers;
                  while( true ) {
                    if (pAVar31 == (AvatarModifierPackage_AvatarModifier__Array *)0x0)
                    goto code_?;
                    if ((int)pAVar31->max_length <= (int)trimChars) break;
                    pMStack_13 = (MethodInfo *)(this->fields).modifierEffectCount;
                    func_?();
                    if (pMStack_13 == (MethodInfo *)0x0) goto code_?;
                    pcVar32 = (char *)func_?();
                    *pcVar32 = *pcVar32 + '\x01';
                    trimChars = (Char__Array *)
                                ((int)&trimChars->klass + AvatarModifierPackageType__Enum_Fire);
                  }
                }
              }
            }
            else {
              pMStack_13 = (MethodInfo *)
                           func_?(&KStack_7,
                                           MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                                          );
              pDVar29 = (this->fields).currentModifierByteState;
              if (pDVar29 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
              goto code_?;
              uStack_39 = mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[AvatarModifierPackageType,System::Byte]::
                          Dictionary_2_AvatarModifierPackageType_System_Byte__get_Item
                                    (pDVar29,(AvatarModifierPackageType__Enum)trimChars,
                                     MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__get_Item_AvatarModifierPackageType_
                                    );
              puVar37 = (uint8_t *)func_?();
              if (*puVar37 != uStack_39) {
                pDVar16 = (this->fields).modifiers;
                if ((pDVar16 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0) ||
                   (pOVar27 = mscorlib.dll::System::Collections::Generic::
                              Dictionary`2[AvatarModifierPackageType,System::Object]::
                              Dictionary_2_AvatarModifierPackageType_System_Object__get_Item
                                        ((Dictionary_2_AvatarModifierPackageType_System_Object_ *)
                                         pDVar16,(AvatarModifierPackageType__Enum)trimChars,
                                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                                        ), pOVar27 == (Object *)0x0)) goto code_?;
                func_?();
                pCStack_21 = (Char__Array *)(this->fields).currentModifierByteState;
                func_?();
                if (pCStack_21 == (Char__Array *)0x0) goto code_?;
                pMStack_13 = 
                MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__set_Item_AvatarModifierPackageType__unsigned_char_
                ;
                puVar37 = (uint8_t *)func_?();
                _uStack_40 = CONCAT31(uStack_40,*puVar37);
                mscorlib.dll::System::Collections::Generic::
                Dictionary`2[AvatarModifierPackageType,System::Byte]::
                Dictionary_2_AvatarModifierPackageType_System_Byte__set_Item
                          ((Dictionary_2_AvatarModifierPackageType_System_Byte_ *)pCStack_21,
                           (AvatarModifierPackageType__Enum)trimChars,*puVar37,pMStack_13);
              }
            }
          }
          piStack_14[(int)((int)&pTStack_25->klass + 1)] = 0x2d4;
          uStack_1 = 0xffffffff;
          func_?(&LStack_8,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         );
          if (trimChars == (Char__Array *)0x0) {
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?(trimChars,0,0);
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::Avatar::Avatar_1_VisualizeBulletImpact
               (Avatar_1 *this,VoxelHit voxelHit,Ray lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  pAVar1 = (this->fields).bulletImpactVisualizer;
  if (pAVar1 != (AvatarBulletImpactVisualizer *)0x0) {
    (*(code *)(pAVar1->klass->vtable).VisualizeBulletImpact_1.method)(pAVar1);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Avatar() */

void Assembly-CSharp.dll::Avatar::Avatar_1__ctor(Avatar_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
            );
  (this->fields).modifiers = this_00;
  this_01 = (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
            );
  (this->fields).currentModifierByteState = this_01;
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x1b);
  (this->fields).modifierEffectCount = pBVar1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Bounds get_Bounds() */

Bounds * Assembly-CSharp.dll::Avatar::Avatar_1_get_Bounds
                   (Bounds *__return_storage_ptr__,Avatar_1 *this,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 != (MVAvatar *)0x0) {
    pfVar2 = (float *)(*(code *)(pMVar1->klass->vtable).GetLocalBounds.method)
                                (auStack_3,pMVar1,3,(pMVar1->klass->vtable).Select.methodPtr);
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
    fVar6 = pfVar2[3];
    (__return_storage_ptr__->m_Center).x = *pfVar2;
    (__return_storage_ptr__->m_Center).y = fVar4;
    (__return_storage_ptr__->m_Center).z = fVar5;
    (__return_storage_ptr__->m_Extents).x = fVar6;
    fVar4 = pfVar2[5];
    (__return_storage_ptr__->m_Extents).y = pfVar2[4];
    (__return_storage_ptr__->m_Extents).z = fVar4;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pBVar8 = (Bounds *)(*pcVar7)();
  return pBVar8;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::Avatar::Avatar_1_get_Position
                    (Vector3 *__return_storage_ptr__,Avatar_1 *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::Avatar::Avatar_1_get_Velocity
                    (Vector3 *__return_storage_ptr__,Avatar_1 *this,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 != (MVAvatar *)0x0) {
    puVar2 = (undefined8 *)
             (*(code *)(pMVar1->klass->vtable).__unknown_1.method)
                       (auStack_3,pMVar1,(pMVar1->klass->vtable).OnAnimationChange.methodPtr);
    uVar4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    __return_storage_ptr__->x = (float)(int)uVar4;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}

