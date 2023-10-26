
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_AddModifier
               (MVInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageType);
    func_?(&TypeInfo__AvatarModifierPackage);
    func_?(&TypeInfo__System__Byte);
    uVar1 = 0x10ee;
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
  AVar3 = type;
  pMVar4 = this;
  pAVar5 = (this->fields).modifierPackages;
  bVar6 = 0;
  if (pAVar5 != (AvatarModifierPackages *)0x0) {
    uVar1 = 0;
    action = (MVInteractable *)
             AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                       (pAVar5,type,(MethodInfo *)0x0);
    pMVar7 = (pMVar4->fields).runtimeDataModifiers;
    bVar6 = 0;
    unaff_ESI = (byte *)AVar3;
    if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
      this = (MVInteractable *)
             MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar7,(MethodInfo *)0x0);
      unaff_EBX = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)func_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
      bVar6 = 0;
      if (unaff_EBX !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        if (this == (MVInteractable *)0x0) {
          dictionary = (MVInteractable *)0x0;
code_?:
          pMVar8 = 
          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
          ::Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object___ctor_1
                    (unaff_EBX,
                     (IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)dictionary,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                    );
          uVar1 = (undefined2)((uint)pMVar8 >> 0x10);
          if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__AvatarModifierPackage);
          }
          pSVar9 = TypeInfo__AvatarModifierPackage->static_fields->
                   AvatarModifierPackageTypeLookupTable;
          bVar6 = 0;
          if (pSVar9 != (String__Array *)0x0) {
            bVar6 = AVar3 < pSVar9->max_length;
            if (!(bool)bVar6) goto code_?;
            type = (AvatarModifierPackageType__Enum)pSVar9->vector[AVar3];
            switch(action) {
            case (MVInteractable *)0x0:
              uVar1 = 0x101e;
              bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)unaff_EBX
                                 ,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar10 != 0) {
                return;
              }
              pAVar5 = (pMVar4->fields).modifierPackages;
              bVar6 = 0;
              if (pAVar5 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar5,AVar3,id,additionalModifers,(MethodInfo *)0x0);
                this = (MVInteractable *)((uint)this & 0xffffff);
                pOVar11 = (Object *)func_?();
                unaff_ESI = (byte *)type;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,(Object *)type,
                           pOVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pMVar7 = (pMVar4->fields).runtimeDataModifiers;
joined_?:
                bVar6 = 0;
                if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
                  MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                            (pMVar7,(Object *)unaff_EBX,(MethodInfo *)0x0);
code_?:
                  return;
                }
              }
              break;
            case (MVInteractable *)0x1:
              uVar1 = 0x101e;
              bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)unaff_EBX
                                 ,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar10 == 0) {
                return;
              }
              pAVar5 = (pMVar4->fields).modifierPackages;
              bVar6 = 0;
              if (pAVar5 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar5,AVar3,id,additionalModifers,(MethodInfo *)0x0);
                unaff_ESI = (byte *)type;
                pMVar8 = (MethodInfo *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,
                                     (Object *)type,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                uVar12 = CONCAT44(TypeInfo__System__Byte,pMVar8);
                bVar6 = 0;
                if (pMVar8 != (MethodInfo *)0x0) {
                  pIVar13 = (((Object__Class *)pMVar8->methodPointer)->_0).element_class;
                  pIVar14 = (TypeInfo__System__Byte->_0).element_class;
                  bVar6 = pIVar13 < pIVar14;
                  if (pIVar13 != pIVar14) goto code_?;
                  additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
                  method = pMVar8;
                  pcVar15 = (char *)func_?();
                  this = (MVInteractable *)CONCAT13(*pcVar15 + '\x01',this._0_3_);
                  additionalModifers =
                       (AvatarModifierPackage_AvatarModifier__Array *)((int)&this + 3);
                  id = (int32_t)TypeInfo__System__Byte;
                  type = (AvatarModifierPackageType__Enum)&UNK_?;
                  pOVar11 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,
                             (Object *)unaff_ESI,pOVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
code_?:
                  pMVar7 = (pMVar4->fields).runtimeDataModifiers;
                  goto joined_?;
                }
              }
              break;
            case (MVInteractable *)0x2:
              uVar1 = 0x101e;
              bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)unaff_EBX
                                 ,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar10 != 0) {
                return;
              }
              pAVar5 = (pMVar4->fields).modifierPackages;
              bVar6 = 0;
              if (pAVar5 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar5,AVar3,id,additionalModifers,(MethodInfo *)0x0);
                pAVar5 = (pMVar4->fields).modifierPackages;
                bVar6 = 0;
                if (pAVar5 != (AvatarModifierPackages *)0x0) {
                  type = AvatarModifierPackageType__Enum_None;
                  this = action;
                  this_00 = (Enum *)AvatarModifierPackages::
                                    AvatarModifierPackages_GetPackageToActWith
                                              (pAVar5,AVar3,(ModifierActions__Enum)action,
                                               (MethodInfo *)0x0);
                  type = (AvatarModifierPackageType__Enum)
                         (pMVar4->klass->vtable).RemoveModifier.method;
                  this = (MVInteractable *)0xffffffff;
                  (*(pMVar4->klass->vtable).RemoveModifier.methodPtr)();
                  pSVar16 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
                  pSVar16 = mscorlib.dll::System::String::String_Concat_3
                                      (::StringLiteral__,pSVar16,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Remove
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,
                             (Object *)pSVar16,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                            );
                  this = (MVInteractable *)((uint)this & 0xffffff);
                  in_stack_17 = (int)&this + 3;
                  in_stack_18 = TypeInfo__System__Byte;
                  in_stack_19 = &UNK_?;
                  pOVar11 = (Object *)func_?();
                  unaff_ESI = (byte *)type;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,(Object *)type,
                             pOVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  goto code_?;
                }
              }
              break;
            case (MVInteractable *)0x3:
              pAVar5 = (pMVar4->fields).modifierPackages;
              bVar6 = 0;
              if (pAVar5 != (AvatarModifierPackages *)0x0) {
                AVar3 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                                   (pAVar5,AVar3,(ModifierActions__Enum)action,(MethodInfo *)0x0);
                (*(pMVar4->klass->vtable).RemoveModifier.methodPtr)
                          (pMVar4,AVar3,id,(pMVar4->klass->vtable).RemoveModifier.method);
                return;
              }
              break;
            default:
              goto code_?;
            }
          }
        }
        else {
          type = (AvatarModifierPackageType__Enum)this->klass;
          bVar6 = (((MVInteractable__Class *)type)->_1).typeHierarchyDepth <
                   (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).typeHierarchyDepth;
          if ((!(bool)bVar6) &&
             (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                        (((MVInteractable__Class *)type)->_1).typeHierarchy
                        [(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).typeHierarchyDepth - 1],
             bVar6 = pDVar20 < 
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
             , dictionary = this,
             pDVar20 ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          pDVar20 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          func_?(this,
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
          uVar1 = (undefined2)((uint)pDVar20 >> 0x10);
code_?:
          func_?();
        }
      }
    }
  }
  uVar12 = func_?();
code_?:
  uVar21 = 0x101e;
  iVar22 = func_?(uVar12);
  bVar23 = *unaff_ESI + (byte)unaff_EBX;
  bVar24 = CARRY1(*unaff_ESI,(byte)unaff_EBX) || CARRY1(bVar23,bVar6);
  *unaff_ESI = bVar23 + bVar6;
  *(char *)(iVar22 + -0x33efe164) =
       *(char *)(iVar22 + -0x33efe164) + extraout_DL + extraout_CL + bVar24 +
       (CARRY1(extraout_DL,extraout_CL) || CARRY1(extraout_DL + extraout_CL,bVar24));
  pcVar25 = (code *)swi(3);
  (*pcVar25)(CONCAT22(uVar1,in_DS),CONCAT22(uVar21,in_DS));
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
    this_01 = (TweenRunner_1_FloatTween_ *)
              func_?(TypeInfo__AvatarModifierPackages____c__DisplayClass19_0);
    if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
      (this_01->fields).m_CoroutineContainer = (MonoBehaviour *)type;
      this_00 = (pAVar1->fields).packages;
      this_02 = (Predicate_1_AvatarModifierPackage_ *)func_?();
      if ((this_02 != (Predicate_1_AvatarModifierPackage_ *)0x0) &&
         (mscorlib.dll::System::Predicate`1[AvatarModifierPackage]::
          Predicate_1_AvatarModifierPackage___ctor
                    (this_02,(Object *)this_01,
                     MethodInfo__AvatarModifierPackages____c__DisplayClass19_0___HasModifier_b__0_AvatarModifierPackage_
                     ,(MethodInfo *)0x0), this_00 != (List_1_AvatarModifierPackage_ *)0x0)) {
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                UnitySynchronizationContext+WorkRequest]::
                List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Exists
                          ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_00,
                           (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           this_02,
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  if (pAVar1 != (AvatarModifierPackages *)0x0) {
    pAVar2 = (pAVar1->fields).OnModifierExpired;
    this_00 = (Action_1_AvatarModifierPackage_ *)
              func_?(TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate);
    if (this_00 != (Action_1_AvatarModifierPackage_ *)0x0) {
      mscorlib.dll::System::Action`1[AvatarModifierPackage]::Action_1_AvatarModifierPackage___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVInteractable___Init_b__10_0_AvatarModifierPackage_,(MethodInfo *)0x0)
      ;
      pAVar2 = (AvatarModifierPackages_OnModifierExpiredDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar2 == (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
        (pAVar1->fields).OnModifierExpired = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0
        ;
        func_?();
        return;
      }
      pAVar3 = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
      if (pAVar2->klass == TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 != (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
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
      goto code_?;
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
    dictionary = (IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar1,(MethodInfo *)0x0)
    ;
    this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    if (this_01 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      if (dictionary ==
          (IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
          0x0) {
        dictionary = (IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)0x0;
      }
      else if (((dictionary->klass->_1).typeHierarchyDepth <
                (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth) ||
              ((Dictionary_2_System_Object_System_Object___Class *)
               (dictionary->klass->_1).typeHierarchy
               [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth - 1] !=
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      {
        func_?(dictionary,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        goto code_?;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object___ctor_1
                (this_01,dictionary,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                );
      EStack_2.klass = (Enum__Class *)TypeInfo__AvatarModifierPackageType;
      EStack_2.monitor = (MonitorData *)0xffffffff;
      AStack_3 = type;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (::StringLiteral__,pSVar4,(MethodInfo *)0x0);
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_01,
                         (Object *)pSVar4,
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
code_?:
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
    fVar2 = (float10)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                               (pMVar1,(pMVar1->klass->vtable).get_Value.method);
    (*(pMVar1->klass->vtable).set_Value.methodPtr)
              (pMVar1,(float)fVar2 + restoredShieldAmount,(pMVar1->klass->vtable).set_Value.method);
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
      pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
               AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
                         ((AvatarModifierPackages *)method_00,
                          AvatarModifierEffect__Enum_FlamerDamagePrSec,0.0,(MethodInfo *)0x0);
      if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &stack0xffffff9c,pDVar8,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                           );
        uStack_10 = 0;
        DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pDVar9->_dictionary;
        DStack_6._version = pDVar9->_version;
        DStack_6._index = pDVar9->_index;
        DStack_6._current.key = (int32_t)(pDVar9->_current).key;
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
          pOStack_13 = (Object *)DStack_6._current.key;
          fStack_14 = DStack_6._current.value;
          fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          pOStack_16 = (Object *)(fStack_14 * fVar15);
          if ((float)pOStack_16 != _UNK_?) {
            pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar17 == (MVNetworkGame *)0x0) ||
               (pMVar18 = (pMVar17->fields).playerContainer, pMVar18 == (MVPlayerContainer *)0x0))
            goto code_?;
            pMVar19 = MVPlayerContainer::MVPlayerContainer_get_Item
                               (pMVar18,(int32_t)pOStack_13,(MethodInfo *)0x0);
            in_stack_20 = (MethodInfo *)0x5;
            func_?(5,this,pOStack_16,pMVar19,0xd);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                   ,in_stack_20);
        uStack_1 = 0xffffffff;
        pAVar7 = (this->fields).modifierPackages;
        if (pAVar7 != (AvatarModifierPackages *)0x0) {
          pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                   AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
                             (pAVar7,AvatarModifierEffect__Enum_RayHealEnemyDamagePrSec,0.0,
                              (MethodInfo *)0x0);
          if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                                &stack0xffffff9c,pDVar8,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                               );
            uStack_10 = 0;
            DStack_6._dictionary =
                 (Dictionary_2_System_Int32Enum_System_Single_ *)pDVar9->_dictionary;
            DStack_6._version = pDVar9->_version;
            DStack_6._index = pDVar9->_index;
            DStack_6._current.key = (int32_t)(pDVar9->_current).key;
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
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            ((Object *)&DStack_6,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                             ,method_00);
                  uStack_1 = 0xffffffff;
                  fVar21 = (float10)(*(this->klass->vtable).HandleModifierEffect.methodPtr)
                                              (this,0xe,0,
                                               (this->klass->vtable).HandleModifierEffect.method);
                  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar15 * (float)fVar21 != _UNK_?) {
                    (*(this->klass->vtable).__unknown.methodPtr)(this,fVar15 * (float)fVar21,0,6);
                  }
                  fVar21 = (float10)(*(this->klass->vtable).HandleModifierEffect.methodPtr)
                                              (this,0x15,0);
                  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  fVar15 = (_UNK_? - (this->fields).poisonResist) * fVar15 * (float)fVar21;
                  if (fVar15 != _UNK_?) {
                    (*(this->klass->vtable).__unknown.methodPtr)(this,fVar15,0);
                  }
                  fVar21 = (float10)(*(this->klass->vtable).HandleModifierEffect.methodPtr)
                                              (this,0x16);
                  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  fVar15 = (_UNK_? - (this->fields).poisonResist) * fVar15 * (float)fVar21;
                  if (fVar15 != _UNK_?) {
                    (*(this->klass->vtable).__unknown.methodPtr)(this,fVar15);
                  }
                  fVar15 = (this->fields).healthRegenerationPerSecondSetting;
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar22 * fVar15 != _UNK_?) {
                    (*(this->klass->vtable).__unknown.methodPtr)(this);
                  }
                  fVar15 = (this->fields).healthRegenerationPerSecondSetting;
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar22 * fVar15 != _UNK_?) {
                    (*(this->klass->vtable).__unknown.methodPtr)();
                  }
                  fVar15 = (this->fields).shieldRegenerationPerSecondSetting;
                  fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  if (fVar22 * fVar15 != _UNK_?) {
                    (*(this->klass->vtable).RestoreShield.methodPtr)();
                  }
                  *unaff_FS_OFFSET = uStack_3;
                  return;
                }
                pOStack_16 = (Object *)DStack_6._current.key;
                fStack_14 = DStack_6._current.value;
                fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                pOStack_13 = (Object *)(fVar15 * fStack_14);
              } while ((float)pOStack_13 == _UNK_?);
              pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar17 == (MVNetworkGame *)0x0) ||
                 (pMVar18 = (pMVar17->fields).playerContainer, pMVar18 == (MVPlayerContainer *)0x0))
              break;
              MVPlayerContainer::MVPlayerContainer_get_Item
                        (pMVar18,(int32_t)pOStack_16,(MethodInfo *)0x0);
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
  (*(this->klass->vtable).RemoveModifier.methodPtr)
            (this,modifier.avatarModifierPackageType,modifier.id,
             (this->klass->vtable).RemoveModifier.method);
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
  if (this_00 != (AvatarModifierPackages *)0x0) {
    AvatarModifierPackages::AvatarModifierPackages__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).modifierPackages = this_00;
    func_?(&(this->fields).modifierPackages,this_00);
    MVComponent::MVComponent__ctor((MVComponent *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

