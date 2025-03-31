
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_AddModifier
               (MVInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  pMVar1 = this;
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
  AVar2 = type;
  pAVar3 = (this->fields).modifierPackages;
  bVar4 = 0;
  if (pAVar3 != (AvatarModifierPackages *)0x0) {
    action = AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                       (pAVar3,type,(MethodInfo *)0x0);
    pMVar5 = (this->fields).runtimeDataModifiers;
    bVar4 = 0;
    unaff_ESI = (MVInteractable *)AVar2;
    if (pMVar5 != (MVRuntimeDataVariable *)0x0) {
      dictionary = (IDictionary_2_System_Object_System_Object_ *)
                   MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar5,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      if ((dictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) ||
         ((bVar4 = (dictionary->klass->_1).naturalAligment <
                    (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment, !(bool)bVar4 &&
          (pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)
                    (dictionary->klass->_1).typeHierarchy
                    [(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment - 1],
          bVar4 = pDVar6 < 
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          , unaff_ESI = (MVInteractable *)type,
          pDVar6 == 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object___ctor_1
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,dictionary,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                  );
        if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AvatarModifierPackage);
        }
        pSVar7 = TypeInfo__AvatarModifierPackage->static_fields->
                 AvatarModifierPackageTypeLookupTable;
        bVar4 = 0;
        if (pSVar7 != (String__Array *)0x0) {
          bVar4 = unaff_ESI < (MVInteractable *)pSVar7->max_length;
          if (!(bool)bVar4) goto code_?;
          key = (MVInteractable *)pSVar7->vector[(int)unaff_ESI];
          switch(action) {
          case ModifierActions__Enum_Add:
            bVar4 = 0;
            if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                 (this_00,(Object *)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar8 != 0) {
                return;
              }
              pAVar3 = (this->fields).modifierPackages;
              bVar4 = 0;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,(AvatarModifierPackageType__Enum)unaff_ESI,id,additionalModifers,
                           (MethodInfo *)0x0);
                type = type & 0xffffff;
                pOVar9 = (Object *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,
                           pOVar9,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pMVar5 = (this->fields).runtimeDataModifiers;
joined_?:
                bVar4 = 0;
                unaff_ESI = key;
                if (pMVar5 != (MVRuntimeDataVariable *)0x0) {
                  MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                            (pMVar5,(Object *)this_00,(MethodInfo *)0x0);
code_?:
                  return;
                }
              }
            }
            break;
          case ModifierActions__Enum_Renew:
            bVar4 = 0;
            if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                 (this_00,(Object *)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar8 == 0) {
                return;
              }
              pAVar3 = (this->fields).modifierPackages;
              bVar4 = 0;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,(AvatarModifierPackageType__Enum)unaff_ESI,id,additionalModifers,
                           (MethodInfo *)0x0);
                TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (this_00,(Object *)key,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                uVar11 = CONCAT44(TypeInfo__System__Byte,TVar10.m_Index);
                bVar4 = 0;
                unaff_ESI = key;
                if (TVar10.m_Index != 0) {
                  pIVar12 = (TypeInfo__System__Byte->_0).element_class;
                  bVar4 = *(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) < pIVar12;
                  if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) != pIVar12)
                  goto code_?;
                  additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
                  method = (MethodInfo *)TVar10;
                  func_?();
                  additionalModifers =
                       (AvatarModifierPackage_AvatarModifier__Array *)((int)&type + 3);
                  id = (int32_t)TypeInfo__System__Byte;
                  type = (AvatarModifierPackageType__Enum)&UNK_?;
                  pOVar9 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,
                             pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
code_?:
                  pMVar5 = (pMVar1->fields).runtimeDataModifiers;
                  goto joined_?;
                }
              }
            }
            break;
          case ModifierActions__Enum_Replace:
            bVar4 = 0;
            if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                 (this_00,(Object *)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar8 != 0) {
                return;
              }
              pAVar3 = (this->fields).modifierPackages;
              bVar4 = 0;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,(AvatarModifierPackageType__Enum)unaff_ESI,id,additionalModifers,
                           (MethodInfo *)0x0);
                pAVar3 = (this->fields).modifierPackages;
                bVar4 = 0;
                if (pAVar3 != (AvatarModifierPackages *)0x0) {
                  type = AvatarModifierPackageType__Enum_None;
                  this_01 = (Enum *)AvatarModifierPackages::
                                    AvatarModifierPackages_GetPackageToActWith
                                              (pAVar3,(AvatarModifierPackageType__Enum)unaff_ESI,
                                               action,(MethodInfo *)0x0);
                  ppMVar13 = &this->klass;
                  type = (AvatarModifierPackageType__Enum)
                         ((*ppMVar13)->vtable).HasModifierEffect.methodPtr;
                  this = (MVInteractable *)0xffffffff;
                  (*(code *)((*ppMVar13)->vtable).RemoveModifier.method)();
                  pSVar14 = mscorlib.dll::System::Enum::Enum_ToString(this_01,(MethodInfo *)0x0);
                  pSVar14 = mscorlib.dll::System::String::String_Concat_3
                                      (::StringLiteral__,pSVar14,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Remove
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar14,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                            );
                  type = type & 0xffffff;
                  in_stack_15 = (byte *)((int)&type + 3);
                  in_stack_16 = TypeInfo__System__Byte;
                  in_stack_17 = &UNK_?;
                  pOVar9 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,
                             (Object *)0xffffffff,pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  key = this;
                  goto code_?;
                }
              }
            }
            break;
          case ModifierActions__Enum_CancelOut:
            pAVar3 = (this->fields).modifierPackages;
            bVar4 = 0;
            if (pAVar3 != (AvatarModifierPackages *)0x0) {
              AVar2 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                                 (pAVar3,(AvatarModifierPackageType__Enum)unaff_ESI,action,
                                  (MethodInfo *)0x0);
              (*(code *)(this->klass->vtable).RemoveModifier.method)
                        (this,AVar2,id,(this->klass->vtable).HasModifierEffect.methodPtr);
              return;
            }
            break;
          default:
            goto code_?;
          }
        }
      }
      else {
        func_?(dictionary,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
code_?:
        func_?();
      }
    }
  }
  uVar11 = func_?();
  key = unaff_ESI;
code_?:
  uVar11 = func_?(uVar11);
  pbVar18 = (byte *)((int)((ulonglong)uVar11 >> 0x20) + 0x6e1028b1);
  bVar19 = *pbVar18;
  bVar20 = (byte)((uint)pMVar1 >> 8);
  bVar21 = *pbVar18;
  *pbVar18 = bVar21 + bVar20 + bVar4;
  *(byte *)(&pMVar1->klass + (int)key) =
       *(char *)(&pMVar1->klass + (int)key) + bVar20 +
       (CARRY1(bVar19,bVar20) || CARRY1(bVar21 + bVar20,bVar4));
  *(char *)uVar11 = *(char *)uVar11 + -0x28;
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
        if ((pAVar1->fields).OnModifierExpired !=
            (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
          pAVar17 = (pAVar1->fields).OnModifierExpired;
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                     );
      cRam_? = '\x01';
    }
    func_?(&LStack_2,0,0x50);
    this_00 = (pAVar1->fields).packages;
    if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
      pLVar3 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
               List_1_AvatarModifierPackage__GetEnumerator
                         (&LStack_4,this_00,
                          MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                         );
      LStack_2._list = pLVar3->_list;
      LStack_2._index = pLVar3->_index;
      LStack_2._version = pLVar3->_version;
      LStack_2._current.id = (pLVar3->_current).id;
      LStack_2._current.duration.currentCryptoKey = (pLVar3->_current).duration.currentCryptoKey;
      LStack_2._current.duration.hiddenValue = (pLVar3->_current).duration.hiddenValue;
      LStack_2._current.duration.hiddenValueOld = (pLVar3->_current).duration.hiddenValueOld;
      LStack_2._current.duration.fakeValue = (pLVar3->_current).duration.fakeValue;
      LStack_2._current.duration.inited = (pLVar3->_current).duration.inited;
      LStack_2._current.duration._17_3_ = *(undefined3 *)&(pLVar3->_current).duration.field_0x11;
      LStack_2._current.avatarModifiers = (pLVar3->_current).avatarModifiers;
      LStack_2._current.actionsToTakeVsTypes = (pLVar3->_current).actionsToTakeVsTypes;
      LStack_2._current.timeStamp.currentCryptoKey = (pLVar3->_current).timeStamp.currentCryptoKey;
      LStack_2._current.timeStamp.hiddenValue = (pLVar3->_current).timeStamp.hiddenValue;
      LStack_2._current.timeStamp.hiddenValueOld = (pLVar3->_current).timeStamp.hiddenValueOld;
      LStack_2._current.timeStamp.fakeValue = (pLVar3->_current).timeStamp.fakeValue;
      LStack_2._current.timeStamp.inited = (pLVar3->_current).timeStamp.inited;
      LStack_2._current.timeStamp._17_3_ = *(undefined3 *)&(pLVar3->_current).timeStamp.field_0x11;
      LStack_2._current.persistant = (pLVar3->_current).persistant;
      LStack_2._current._53_3_ = *(undefined3 *)&(pLVar3->_current).field_0x35;
      LStack_2._current.lastTimeStamp = (pLVar3->_current).lastTimeStamp;
      LStack_2._current.avatarModifierPackageType = (pLVar3->_current).avatarModifierPackageType;
      LStack_2._current.avatarModifierPackageAdditionPolicy =
           (pLVar3->_current).avatarModifierPackageAdditionPolicy;
      while( true ) {
        pLVar3 = &LStack_2;
        bVar5 = mscorlib.dll::System::Collections::Generic::
                List`1[T]+Enumerator[AvatarModifierPackage]::
                List_1_T_Enumerator_AvatarModifierPackage__MoveNext
                          (pLVar3,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                          );
        pAVar6 = LStack_2._current.avatarModifiers;
        if (bVar5 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_2,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                     ,unaff_retaddr);
          *unaff_FS_OFFSET = pLVar3;
          return 0;
        }
        iVar7 = 0;
        if (LStack_2._current.avatarModifiers == (AvatarModifierPackage_AvatarModifier__Array *)0x0
           ) break;
        for (; iVar7 < (int)pAVar6->max_length; iVar7 = iVar7 + 1) {
          func_?();
          if (AStack_8 == avatarModifierEffect) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_2,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                       ,unaff_retaddr);
            *unaff_FS_OFFSET = pLVar3;
            return 1;
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  bVar5 = (*pcVar9)();
  return bVar5;
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
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
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
        return bVar8 == 0;
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
               (MVInteractable *this,MVPlayer *healer,MethodInfo *method)

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
          ((healer != (MVPlayer *)0x0 && (MVar4 != (healer->fields)._Team_k__BackingField)))) &&
         (MVar4 != MVTeam__Enum_None)) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if (pMVar6 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar6->fields)._._ActorNr_k__BackingField != (healer->fields)._ActorNr_k__BackingField
           ) {
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
        return bVar8 == 0;
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
  (this->fields).runtimeDataModifiers = runtimeDataModifiers;
  func_?(&(this->fields).runtimeDataModifiers,runtimeDataModifiers);
  (this->fields).health = health;
  func_?(&(this->fields).health,health);
  (this->fields).maxHealth = maxHealth;
  func_?(&(this->fields).maxHealth,maxHealth);
  (this->fields).shield = shield;
  func_?(&(this->fields).shield,shield);
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 == (AvatarModifierPackages *)0x0) {
    func_?();
  }
  else {
    pAVar2 = (pAVar1->fields).OnModifierExpired;
    this_00 = (Action_1_AvatarModifierPackage_ *)
              func_?(TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate);
    mscorlib.dll::System::Action`1[AvatarModifierPackage]::Action_1_AvatarModifierPackage___ctor
              (this_00,(Object *)this,
               MethodInfo__MVInteractable___Init_b__10_0_AvatarModifierPackage_,(MethodInfo *)0x0);
    pAVar2 = (AvatarModifierPackages_OnModifierExpiredDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar2 == (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
      (pAVar1->fields).OnModifierExpired = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
      func_?();
      return;
    }
    pAVar3 = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
    if (pAVar2->klass == TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) goto code_?;
    (pAVar1->fields).OnModifierExpired = pAVar3;
    pAVar3 = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
    if (pAVar2->klass == TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 != (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
      func_?();
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    if ((dictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) ||
       (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= (dictionary->klass->_1).naturalAligment &&
        ((Dictionary_2_System_Object_System_Object___Class *)
         (dictionary->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment - 1] ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object___ctor_1
                ((Dictionary_2_System_Object_System_Object_ *)this_01,dictionary,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                );
      EStack_2.klass = (Enum__Class *)TypeInfo__AvatarModifierPackageType;
      AStack_3 = type;
      EStack_2.monitor = (MonitorData *)0xffffffff;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (::StringLiteral__,pSVar4,(MethodInfo *)0x0);
      if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (this_01,(Object *)pSVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar5 == 0) {
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)pSVar4,
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
    else {
      func_?(dictionary,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = 0.0;
  DStack_6._getEnumeratorRetType = 0;
  pAVar7 = (this->fields).modifierPackages;
  if (pAVar7 != (AvatarModifierPackages *)0x0) {
    AvatarModifierPackages::AvatarModifierPackages_Update(pAVar7,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(this->fields).modifierPackages;
    if (method_00 != (MethodInfo *)0x0) {
      pDVar8 = (Dictionary_2_System_UInt32_System_Object_ *)
               AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
                         ((AvatarModifierPackages *)method_00,
                          AvatarModifierEffect__Enum_FlamerDamagePrSec,0.0,(MethodInfo *)0x0);
      if (pDVar8 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffff9c,pDVar8,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                           );
        uStack_10 = 0;
        DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pDVar9->_dictionary;
        DStack_6._version = pDVar9->_version;
        DStack_6._index = pDVar9->_index;
        DStack_6._current.key = (pDVar9->_current).key;
        DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
        uStack_1 = 1;
        pDStack_11 = &DStack_6;
        while( true ) {
          bVar12 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Single]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                            );
          if (bVar12 == 0) break;
          fStack_13 = (float)DStack_6._current.key;
          fStack_14 = DStack_6._current.value;
          fStack_15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                ((MethodInfo *)0x0);
          fStack_15 = fStack_14 * fStack_15;
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                   ,in_stack_19);
        uStack_1 = 0xffffffff;
        pAVar7 = (this->fields).modifierPackages;
        if (pAVar7 != (AvatarModifierPackages *)0x0) {
          pDVar8 = (Dictionary_2_System_UInt32_System_Object_ *)
                   AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
                             (pAVar7,AvatarModifierEffect__Enum_RayHealEnemyDamagePrSec,0.0,
                              (MethodInfo *)0x0);
          if (pDVar8 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
            pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System
                     ::Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                                &stack0xffffff9c,pDVar8,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                               );
            uStack_10 = 0;
            DStack_6._dictionary =
                 (Dictionary_2_System_Int32Enum_System_Single_ *)pDVar9->_dictionary;
            DStack_6._version = pDVar9->_version;
            DStack_6._index = pDVar9->_index;
            DStack_6._current.key = (pDVar9->_current).key;
            DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
            uStack_1 = 4;
            pDStack_11 = &DStack_6;
            while( true ) {
              do {
                bVar12 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Single]::
                        Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                                  (&DStack_6,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                                  );
                if (bVar12 == 0) {
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&DStack_6,
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
                                              (this,0x16,0);
                  fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  fVar21 = (_UNK_? - (this->fields).poisonResist) * fVar21 * (float)fVar20;
                  if (fVar21 != _UNK_?) {
                    (*(code *)(this->klass->vtable).__unknown.method)(this,fVar21,0);
                  }
                  fVar20 = (float10)(*(code *)(this->klass->vtable).HandleModifierEffect.method)
                                              (this,0x17);
                  fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  fVar21 = (_UNK_? - (this->fields).poisonResist) * fVar21 * (float)fVar20;
                  if (fVar21 != _UNK_?) {
                    (*(code *)(this->klass->vtable).__unknown.method)(this,fVar21);
                  }
                  fVar20 = (float10)(*(code *)(this->klass->vtable).HandleModifierEffect.method)
                                              (this);
                  fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar21 * (float)fVar20 != _UNK_?) {
                    (*(code *)(this->klass->vtable).__unknown_2.method)();
                  }
                  fVar21 = (this->fields).healthRegenerationPerSecondSetting;
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar22 * fVar21 != _UNK_?) {
                    (*(code *)(this->klass->vtable).__unknown_2.method)();
                  }
                  fVar21 = (this->fields).healthRegenerationPerSecondSetting;
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar22 * fVar21 != _UNK_?) {
                    (*(code *)(this->klass->vtable).__unknown_2.method)();
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
                fStack_15 = (float)DStack_6._current.key;
                fStack_14 = DStack_6._current.value;
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
  (this->fields).modifierPackages = this_00;
  func_?(&(this->fields).modifierPackages,this_00);
  (this->fields)._._.findWorldObjectParent = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

