
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_AddModifier
               (MVInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageType);
    func_?(&TypeInfo__AvatarModifierPackage);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  AVar1 = type;
  pMVar2 = this;
  pAVar3 = (this->fields).modifierPackages;
  if (pAVar3 != (AvatarModifierPackages *)0x0) {
    MVar4 = AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                      (pAVar3,type,(MethodInfo *)0x0);
    pMVar5 = (pMVar2->fields).runtimeDataModifiers;
    if (pMVar5 != (MVRuntimeDataVariable *)0x0) {
      dictionary = (IDictionary_2_System_Object_System_Object_ *)
                   MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar5,(MethodInfo *)0x0);
      unaff_EDI = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      if (dictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
        dictionary = (IDictionary_2_System_Object_System_Object_ *)0x0;
code_?:
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object___ctor_1
                  ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,dictionary,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                  );
        if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AvatarModifierPackage);
        }
        pSVar6 = TypeInfo__AvatarModifierPackage->static_fields->
                 AvatarModifierPackageTypeLookupTable;
        if (pSVar6 != (String__Array *)0x0) {
          if (pSVar6->max_length <= AVar1) goto code_?;
          type = (AvatarModifierPackageType__Enum)pSVar6->vector[AVar1];
          switch(MVar4) {
          case ModifierActions__Enum_Add:
            if (unaff_EDI != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (unaff_EDI,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar7 != 0) {
                return;
              }
              pAVar3 = (pMVar2->fields).modifierPackages;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,AVar1,id,additionalModifers,(MethodInfo *)0x0);
                this = (MVInteractable *)((uint)this & 0xffffff);
                pOVar8 = (Object *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)type,
                           pOVar8,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pMVar5 = (pMVar2->fields).runtimeDataModifiers;
joined_?:
                if (pMVar5 != (MVRuntimeDataVariable *)0x0) {
                  MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                            (pMVar5,(Object *)unaff_EDI,(MethodInfo *)0x0);
code_?:
                  return;
                }
              }
            }
            break;
          case ModifierActions__Enum_Renew:
            if (unaff_EDI != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (unaff_EDI,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar7 == 0) {
                return;
              }
              pAVar3 = (pMVar2->fields).modifierPackages;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,AVar1,id,additionalModifers,(MethodInfo *)0x0);
                AVar1 = type;
                TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  (unaff_EDI,(Object *)type,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                uVar10 = CONCAT44(TypeInfo__System__Byte,TVar9.m_Index);
                if (TVar9.m_Index != 0) {
                  if (*(Il2CppClass **)(*(int *)TVar9.m_Index + 0x20) !=
                      (TypeInfo__System__Byte->_0).element_class) goto code_?;
                  type = (AvatarModifierPackageType__Enum)&UNK_?;
                  id = TVar9.m_Index;
                  func_?();
                  type = (int)&this + AvatarModifierPackageType__Enum_Sticky;
                  this = (MVInteractable *)TypeInfo__System__Byte;
                  pOVar8 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)AVar1
                             ,pOVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
code_?:
                  pMVar5 = (pMVar2->fields).runtimeDataModifiers;
                  goto joined_?;
                }
              }
            }
            break;
          case ModifierActions__Enum_Replace:
            if (unaff_EDI != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (unaff_EDI,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar7 != 0) {
                return;
              }
              pAVar3 = (pMVar2->fields).modifierPackages;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,AVar1,id,additionalModifers,(MethodInfo *)0x0);
                pAVar3 = (pMVar2->fields).modifierPackages;
                if (pAVar3 != (AvatarModifierPackages *)0x0) {
                  this_00 = (Enum *)AvatarModifierPackages::
                                    AvatarModifierPackages_GetPackageToActWith
                                              (pAVar3,AVar1,ModifierActions__Enum_Replace,
                                               (MethodInfo *)0x0);
                  (*(code *)(pMVar2->klass->vtable).RemoveModifier.method)();
                  pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
                  pSVar11 = mscorlib.dll::System::String::String_Concat_3
                                      (::StringLiteral__,pSVar11,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Remove
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                             (Object *)pSVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                            );
                  this = (MVInteractable *)((uint)this & 0xffffff);
                  in_stack_12 = (int)&this + 3;
                  in_stack_13 = TypeInfo__System__Byte;
                  in_stack_14 = &UNK_?;
                  pOVar8 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)type,
                             pOVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  goto code_?;
                }
              }
            }
            break;
          case ModifierActions__Enum_CancelOut:
            pAVar3 = (pMVar2->fields).modifierPackages;
            if (pAVar3 != (AvatarModifierPackages *)0x0) {
              AVar1 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                                 (pAVar3,AVar1,ModifierActions__Enum_CancelOut,(MethodInfo *)0x0);
              (*(code *)(pMVar2->klass->vtable).RemoveModifier.method)
                        (pMVar2,AVar1,id,(pMVar2->klass->vtable).HasModifierEffect.methodPtr);
              return;
            }
            break;
          default:
            goto code_?;
          }
        }
      }
      else {
        bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((bVar15 <= (dictionary->klass->_1).naturalAligment) &&
           (pMVar2 = this, AVar1 = type,
           (Dictionary_2_System_Object_System_Object___Class *)
           (dictionary->klass->_1).typeHierarchy[bVar15 - 1] ==
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        func_?(dictionary,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
code_?:
        func_?();
      }
    }
  }
  uVar10 = func_?();
code_?:
  pcVar16 = (char *)func_?(uVar10);
  ppIVar17 = &unaff_EDI[0xd2ed15].fields._comparer;
  *pcVar16 = *pcVar16 + (char)((int)&(*ppIVar17)->klass + extraout_ECX >> 8) +
             CARRY4(extraout_ECX,(uint)*ppIVar17);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void ClearModifiers() */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_ClearModifiers
               (MVInteractable *this,MethodInfo *method)

{
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 != (AvatarModifierPackages *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pLVar2 = (pAVar1->fields).packages;
    if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
      index = (pLVar2->fields)._size;
      do {
        do {
          index = index + -1;
          if (index < 0) {
            return;
          }
          pLVar2 = (pAVar1->fields).packages;
          if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
          pAVar3 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
                   List_1_AvatarModifierPackage__get_Item
                             (&AStack_4,pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                             );
          iStack_5 = pAVar3->id;
          iStack_6 = (pAVar3->duration).currentCryptoKey;
          AStack_7 = (pAVar3->duration).hiddenValue;
          pBStack_8 = (pAVar3->duration).hiddenValueOld;
          fStack_9 = (pAVar3->duration).fakeValue;
          uStack_10 = *(undefined4 *)&(pAVar3->duration).inited;
          pAStack_11 = pAVar3->avatarModifiers;
          pDStack_12 = pAVar3->actionsToTakeVsTypes;
          iStack_13 = (pAVar3->timeStamp).currentCryptoKey;
          AStack_14 = (pAVar3->timeStamp).hiddenValue;
          pBStack_15 = (pAVar3->timeStamp).hiddenValueOld;
          fStack_16 = (pAVar3->timeStamp).fakeValue;
        } while (pAVar3->persistant != 0);
        pAVar17 = (pAVar1->fields).OnModifierExpired;
        if (pAVar17 != (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
          if ((pAVar1->fields).packages == (List_1_AvatarModifierPackage_ *)0x0) break;
          AStack_4.id = (int32_t)
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
          ;
          puVar18 = (undefined4 *)func_?();
          AStack_4.id = (int32_t)(pAVar17->fields)._._.method;
          (*(pAVar17->fields)._._.invoke_impl)
                    ((pAVar17->fields)._._.method_code,*puVar18,puVar18[1],puVar18[2],puVar18[3],
                     puVar18[4],puVar18[5],puVar18[6],puVar18[7],puVar18[8],puVar18[9]);
        }
        pLVar2 = (pAVar1->fields).packages;
        if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
        List_1_AvatarModifierPackage__RemoveAt
                  (pLVar2,index,
                   MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                  );
      } while( true );
    }
  }
code_?:
  uVar19 = func_?(&stack0xffffff58);
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Single HandleModifierEffect(AvatarModifierEffect, Single) */

float Assembly-CSharp.dll::MVInteractable::MVInteractable_HandleModifierEffect
                (MVInteractable *this,AvatarModifierEffect__Enum avatarModifierEffect,
                float baseValue,MethodInfo *method)

{
  this_00 = (this->fields).modifierPackages;
  if (this_00 != (AvatarModifierPackages *)0x0) {
    fVar1 = AvatarModifierPackages::AvatarModifierPackages_HandleModifierEffect
                      (this_00,avatarModifierEffect,baseValue,(MethodInfo *)0x0);
    return fVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Boolean HasModifier(AvatarModifierPackageType) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_HasModifier
               (MVInteractable *this,AvatarModifierPackageType__Enum type,MethodInfo *method)

{
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 != (AvatarModifierPackages *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&TypeInfo__AvatarModifierPackages____c__DisplayClass19_0);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__AvatarModifierPackages____c__DisplayClass19_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    if (value != (Object *)0x0) {
      value[1].klass = (Object__Class *)type;
      this_00 = (pAVar1->fields).packages;
      this_01 = (Predicate_1_AvatarModifierPackage_ *)func_?();
      mscorlib.dll::System::Predicate`1[AvatarModifierPackage]::
      Predicate_1_AvatarModifierPackage___ctor
                (this_01,value,
                 MethodInfo__AvatarModifierPackages____c__DisplayClass19_0___HasModifier_b__0_AvatarModifierPackage_
                 ,(MethodInfo *)0x0);
      if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
                List_1_AvatarModifierPackage__Exists
                          (this_00,this_01,
                           MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Exists_System__Predicate<AvatarModifierPackage>_
                          );
        return bVar2;
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean HasModifierEffect(AvatarModifierEffect) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_HasModifierEffect
               (MVInteractable *this,AvatarModifierEffect__Enum avatarModifierEffect,
               MethodInfo *method)

{
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 != (AvatarModifierPackages *)0x0) {
    uStack_2 = 0xffffffff;
    puStack_3 = &DAT_?;
    uStack_4 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &uStack_4;
    puStack_5 = &stack0xffffff28;
    puVar6 = &stack0xffffff28;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      ppMStack_7 = &
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
      ;
      func_?();
      cRam_? = '\x01';
      puVar6 = puStack_5;
    }
    puStack_5 = puVar6;
    this_00 = (pAVar1->fields).packages;
    if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
               List_1_AvatarModifierPackage__GetEnumerator
                         (&LStack_9,this_00,
                          MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                         );
      uStack_10 = 0;
      LStack_11._list = pLVar8->_list;
      LStack_11._index = pLVar8->_index;
      LStack_11._version = pLVar8->_version;
      LStack_11._current.id = (pLVar8->_current).id;
      LStack_11._current.duration.currentCryptoKey = (pLVar8->_current).duration.currentCryptoKey;
      LStack_11._current.duration.hiddenValue = (pLVar8->_current).duration.hiddenValue;
      LStack_11._current.duration.hiddenValueOld = (pLVar8->_current).duration.hiddenValueOld;
      LStack_11._current.duration.fakeValue = (pLVar8->_current).duration.fakeValue;
      LStack_11._current.duration.inited = (pLVar8->_current).duration.inited;
      LStack_11._current.duration._17_3_ = *(undefined3 *)&(pLVar8->_current).duration.field_0x11;
      LStack_11._current.avatarModifiers = (pLVar8->_current).avatarModifiers;
      LStack_11._current.actionsToTakeVsTypes = (pLVar8->_current).actionsToTakeVsTypes;
      LStack_11._current.timeStamp.currentCryptoKey = (pLVar8->_current).timeStamp.currentCryptoKey;
      LStack_11._current.timeStamp.hiddenValue = (pLVar8->_current).timeStamp.hiddenValue;
      LStack_11._current.timeStamp.hiddenValueOld = (pLVar8->_current).timeStamp.hiddenValueOld;
      LStack_11._current.timeStamp.fakeValue = (pLVar8->_current).timeStamp.fakeValue;
      LStack_11._current.timeStamp.inited = (pLVar8->_current).timeStamp.inited;
      LStack_11._current.timeStamp._17_3_ = *(undefined3 *)&(pLVar8->_current).timeStamp.field_0x11;
      LStack_11._current.persistant = (pLVar8->_current).persistant;
      LStack_11._current._53_3_ = *(undefined3 *)&(pLVar8->_current).field_0x35;
      LStack_11._current.lastTimeStamp = (pLVar8->_current).lastTimeStamp;
      LStack_11._current.avatarModifierPackageType = (pLVar8->_current).avatarModifierPackageType;
      LStack_11._current.avatarModifierPackageAdditionPolicy =
           (pLVar8->_current).avatarModifierPackageAdditionPolicy;
      uStack_2 = 1;
      pLStack_12 = &LStack_11;
      do {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                List`1[T]+Enumerator[AvatarModifierPackage]::
                List_1_T_Enumerator_AvatarModifierPackage__MoveNext
                          (&LStack_11,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                          );
        pAVar14 = LStack_11._current.avatarModifiers;
        if (bVar13 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&LStack_11,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                     ,unaff_EBX);
          *unaff_FS_OFFSET = uStack_4;
          return 0;
        }
        iVar15 = 0;
        while( true ) {
          if (pAVar14 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
          if ((int)pAVar14->max_length <= iVar15) break;
          func_?();
          if (AStack_16 == avatarModifierEffect) {
            uStack_2 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&LStack_11,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                       ,unaff_EDI);
            *unaff_FS_OFFSET = uStack_4;
            return 1;
          }
          iVar15 = iVar15 + 1;
        }
      } while( true );
    }
  }
code_?:
  uVar17 = func_?(&ppMStack_7);
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  bVar13 = (*pcVar18)();
  return bVar13;
}


/* Boolean IgnoreDamage(MVPlayer) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_IgnoreDamage
               (MVInteractable *this,MVPlayer *damageDealer,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pMVar2 = (this->fields)._._.worldObjectParent, pMVar2 != (MVWorldObjectClient *)0x0)) &&
     (pMVar3 = (pMVar1->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    MVar4 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                      (pMVar3,(pMVar2->fields)._.ownerActorNr,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar3 = (pMVar1->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
      iVar5 = MVTeamManager::MVTeamManager_TeamCount(pMVar3,(MethodInfo *)0x0);
      if (((1 < iVar5) &&
          ((damageDealer != (MVPlayer *)0x0 &&
           (MVar4 == (damageDealer->fields)._Team_k__BackingField)))) &&
         (MVar4 != MVTeam__Enum_None)) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
           pMVar6 == (MVLocalPlayer *)0x0)) goto code_?;
        if ((pMVar6->fields)._._ActorNr_k__BackingField !=
            (damageDealer->fields)._ActorNr_k__BackingField) {
          return 1;
        }
      }
      pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar7 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (pSVar7->fields).SpawnRoleModeTypeWrapper,
         this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
        bVar8 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (this_00,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          return 1;
        }
        return 0;
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean IgnoreHealing(MVPlayer) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_IgnoreHealing
               (MVInteractable *this,MVPlayer *damageDealer,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pMVar2 = (this->fields)._._.worldObjectParent, pMVar2 != (MVWorldObjectClient *)0x0)) &&
     (pMVar3 = (pMVar1->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    MVar4 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                      (pMVar3,(pMVar2->fields)._.ownerActorNr,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar3 = (pMVar1->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
      iVar5 = MVTeamManager::MVTeamManager_TeamCount(pMVar3,(MethodInfo *)0x0);
      if (((1 < iVar5) &&
          ((damageDealer != (MVPlayer *)0x0 &&
           (MVar4 != (damageDealer->fields)._Team_k__BackingField)))) &&
         (MVar4 != MVTeam__Enum_None)) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
           pMVar6 == (MVLocalPlayer *)0x0)) goto code_?;
        if ((pMVar6->fields)._._ActorNr_k__BackingField !=
            (damageDealer->fields)._ActorNr_k__BackingField) {
          return 1;
        }
      }
      pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar7 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (pSVar7->fields).SpawnRoleModeTypeWrapper,
         this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
        bVar8 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (this_00,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          return 1;
        }
        return 0;
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable`1[System.Single],
   MVRuntimeDataVariable`1[System.Int32], MVRuntimeDataVariableClampedFloat,
   WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_Init
               (MVInteractable *this,MVRuntimeDataVariable *runtimeDataModifiers,
               MVRuntimeDataVariable_1_System_Single_ *health,
               MVRuntimeDataVariable_1_System_Int32_ *maxHealth,
               MVRuntimeDataVariableClampedFloat *shield,
               WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVInteractable___Init_b__10_0_AvatarModifierPackage_);
    func_?(&TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields).runtimeDataModifiers;
  *ppMVar1 = runtimeDataModifiers;
  func_?(ppMVar1,runtimeDataModifiers);
  ppMVar2 = &(this->fields).health;
  *ppMVar2 = health;
  func_?(ppMVar2,health);
  ppMVar3 = &(this->fields).maxHealth;
  *ppMVar3 = maxHealth;
  func_?(ppMVar3,maxHealth);
  ppMVar4 = &(this->fields).shield;
  *ppMVar4 = shield;
  func_?(ppMVar4,shield);
  pAVar5 = (this->fields).modifierPackages;
  if (pAVar5 == (AvatarModifierPackages *)0x0) {
    func_?();
  }
  else {
    pAVar6 = (pAVar5->fields).OnModifierExpired;
    ppAVar7 = &(pAVar5->fields).OnModifierExpired;
    this_00 = (Action_1_AvatarModifierPackage_ *)
              func_?(TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate);
    mscorlib.dll::System::Action`1[AvatarModifierPackage]::Action_1_AvatarModifierPackage___ctor
              (this_00,(Object *)this,
               MethodInfo__MVInteractable___Init_b__10_0_AvatarModifierPackage_,(MethodInfo *)0x0);
    pAVar6 = (AvatarModifierPackages_OnModifierExpiredDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar6 == (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
      *ppAVar7 = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
      func_?();
      return;
    }
    pAVar8 = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
    if (pAVar6->klass == TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate) {
      pAVar8 = pAVar6;
    }
    if (pAVar8 != (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
      *ppAVar7 = pAVar8;
      pAVar8 = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
      if (pAVar6->klass == TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate) {
        pAVar8 = pAVar6;
      }
      if (pAVar8 != (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeSetings(Single, Single) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_InitializeSetings
               (MVInteractable *this,float healthRegenerationPerSecondSetting,
               float shieldRegenerationPerSecondSetting,MethodInfo *method)

{
  (this->fields).healthRegenerationPerSecondSetting = healthRegenerationPerSecondSetting;
  (this->fields).shieldRegenerationPerSecondSetting = shieldRegenerationPerSecondSetting;
  return;
}


/* Void RemoveModifier(AvatarModifierPackageType, Int32) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_RemoveModifier
               (MVInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).runtimeDataModifiers;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    dictionary = (IDictionary_2_System_Object_System_Object_ *)
                 MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar1,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    if (dictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
      dictionary = (IDictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((dictionary->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (dictionary->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        func_?(dictionary,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        goto code_?;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_1
              ((Dictionary_2_System_Object_System_Object_ *)this_01,dictionary,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    EStack_3.klass = (Enum__Class *)TypeInfo__AvatarModifierPackageType;
    AStack_4 = type;
    EStack_3.monitor = (MonitorData *)0xffffffff;
    pSVar5 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_3
                       (::StringLiteral__,pSVar5,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_01,(Object *)pSVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar6 == 0) {
        return;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Remove
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)pSVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                );
      pMVar1 = (this->fields).runtimeDataModifiers;
      if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (pMVar1,(Object *)this_01,(MethodInfo *)0x0);
        this_00 = (this->fields).modifierPackages;
        if (this_00 != (AvatarModifierPackages *)0x0) {
          AvatarModifierPackages::AvatarModifierPackages_RemoveModifier
                    (this_00,type,id,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RestoreShield(Single) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_RestoreShield
               (MVInteractable *this,float restoredShieldAmount,MethodInfo *method)

{
  pMVar1 = (this->fields).shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                               (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
    (*(code *)(pMVar1->klass->vtable).set_Value.method)
              (pMVar1,(float)fVar2 + restoredShieldAmount,pMVar1->klass[1]._0.image);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_Update
               (MVInteractable *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pAVar6 = (this->fields).modifierPackages;
  if (pAVar6 != (AvatarModifierPackages *)0x0) {
    AvatarModifierPackages::AvatarModifierPackages_Update(pAVar6,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(this->fields).modifierPackages;
    if (method_00 != (MethodInfo *)0x0) {
      pDVar7 = (Dictionary_2_System_UInt32_System_Object_ *)
               AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
                         ((AvatarModifierPackages *)method_00,
                          AvatarModifierEffect__Enum_FlamerDamagePrSec,0.0,(MethodInfo *)0x0);
      if (pDVar7 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffff9c,pDVar7,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                           );
        uStack_9 = 0;
        DStack_10._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pDVar8->_dictionary;
        DStack_10._version = pDVar8->_version;
        DStack_10._index = pDVar8->_index;
        DStack_10._current.key = (pDVar8->_current).key;
        DStack_10._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
        uStack_1 = 1;
        pDStack_11 = &DStack_10;
        while( true ) {
          bVar12 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Single]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                            (&DStack_10,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                            );
          if (bVar12 == 0) break;
          fStack_13 = (float)DStack_10._current.key;
          fStack_14 = DStack_10._current.value;
          fStack_15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                ((MethodInfo *)0x0);
          fStack_15 = fStack_15 * fStack_14;
          if (fStack_15 != _UNK_?) {
            pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar16 == (MVNetworkGame *)0x0) ||
               (pMVar17 = (pMVar16->fields).playerContainer, pMVar17 == (MVPlayerContainer *)0x0))
            goto code_?;
            pMVar18 = MVPlayerContainer::MVPlayerContainer_get_Item
                               (pMVar17,(int32_t)fStack_13,(MethodInfo *)0x0);
            in_stack_19 = (MethodInfo *)0x5;
            func_?(5,this,fStack_15,pMVar18,0xd);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_10,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                   ,in_stack_19);
        uStack_1 = 0xffffffff;
        pAVar6 = (this->fields).modifierPackages;
        if (pAVar6 != (AvatarModifierPackages *)0x0) {
          pDVar7 = (Dictionary_2_System_UInt32_System_Object_ *)
                   AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
                             (pAVar6,AvatarModifierEffect__Enum_RayHealEnemyDamagePrSec,0.0,
                              (MethodInfo *)0x0);
          if (pDVar7 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
            pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System
                     ::Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                                &stack0xffffff9c,pDVar7,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                               );
            uStack_9 = 0;
            DStack_10._dictionary =
                 (Dictionary_2_System_Int32Enum_System_Single_ *)pDVar8->_dictionary;
            DStack_10._version = pDVar8->_version;
            DStack_10._index = pDVar8->_index;
            DStack_10._current.key = (pDVar8->_current).key;
            DStack_10._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
            uStack_1 = 4;
            pDStack_11 = &DStack_10;
            while( true ) {
              do {
                bVar12 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Single]::
                        Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                                  (&DStack_10,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                                  );
                if (bVar12 == 0) {
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                            ((Object *)&DStack_10,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                             ,method_00);
                  uStack_1 = 0xffffffff;
                  fVar20 = (float10)(*(code *)(this->klass->vtable).HandleModifierEffect.method)
                                              (this,0xe,0,
                                               (this->klass->vtable).ClearModifiers.methodPtr);
                  fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar21 * (float)fVar20 != _UNK_?) {
                    (*(code *)(this->klass->vtable).__unknown.method)
                              (this,fVar21 * (float)fVar20,0,6);
                  }
                  fVar20 = (float10)(*(code *)(this->klass->vtable).HandleModifierEffect.method)
                                              (this,0x15,0);
                  fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  fVar21 = (_UNK_? - (this->fields).poisonResist) * fVar21 * (float)fVar20;
                  if (fVar21 != _UNK_?) {
                    (*(code *)(this->klass->vtable).__unknown.method)(this,fVar21,0);
                  }
                  fVar20 = (float10)(*(code *)(this->klass->vtable).HandleModifierEffect.method)
                                              (this,0x16);
                  fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  fVar21 = (_UNK_? - (this->fields).poisonResist) * fVar21 * (float)fVar20;
                  if (fVar21 != _UNK_?) {
                    (*(code *)(this->klass->vtable).__unknown.method)(this,fVar21);
                  }
                  fVar21 = (this->fields).healthRegenerationPerSecondSetting;
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar22 * fVar21 != _UNK_?) {
                    (*(code *)(this->klass->vtable).__unknown.method)(this);
                  }
                  fVar21 = (this->fields).healthRegenerationPerSecondSetting;
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar22 * fVar21 != _UNK_?) {
                    (*(code *)(this->klass->vtable).__unknown.method)();
                  }
                  fVar21 = (this->fields).shieldRegenerationPerSecondSetting;
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar22 * fVar21 != _UNK_?) {
                    (*(code *)(this->klass->vtable).RestoreShield.method)();
                  }
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
                fStack_15 = (float)DStack_10._current.key;
                fStack_14 = DStack_10._current.value;
                fStack_13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                      ((MethodInfo *)0x0);
                fStack_13 = fStack_13 * fStack_14;
              } while (fStack_13 == _UNK_?);
              pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar16 == (MVNetworkGame *)0x0) ||
                 (pMVar17 = (pMVar16->fields).playerContainer, pMVar17 == (MVPlayerContainer *)0x0))
              break;
              MVPlayerContainer::MVPlayerContainer_get_Item
                        (pMVar17,(int32_t)fStack_15,(MethodInfo *)0x0);
              method_00 = (MethodInfo *)0x5;
              func_?(5,this);
            }
          }
        }
      }
    }
  }
code_?:
  uVar23 = func_?();
  uVar23 = func_?(uVar23);
  func_?(uVar23);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void <Init>b__10_0(AvatarModifierPackage) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable__Init_b__10_0
               (MVInteractable *this,AvatarModifierPackage modifier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarModifierPackage);
  }
  (*(code *)(this->klass->vtable).RemoveModifier.method)
            (this,modifier.avatarModifierPackageType,modifier.id,
             (this->klass->vtable).HasModifierEffect.methodPtr);
  return;
}


/* MVInteractable() */

void Assembly-CSharp.dll::MVInteractable::MVInteractable__ctor
               (MVInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackages);
    cRam_? = '\x01';
  }
  this_00 = (AvatarModifierPackages *)func_?(TypeInfo__AvatarModifierPackages);
  AvatarModifierPackages::AvatarModifierPackages__ctor(this_00,(MethodInfo *)0x0);
  ppAVar1 = &(this->fields).modifierPackages;
  *ppAVar1 = this_00;
  func_?(ppAVar1,this_00);
  (this->fields)._._.findWorldObjectParent = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

