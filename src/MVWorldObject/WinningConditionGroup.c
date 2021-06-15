
/* Void AddWinnerCondition(WinningCondition) */

void MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_AddWinnerCondition
               (WinningConditionGroup *this,WinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (winnerCondition != (WinningCondition *)0x0) {
    this_00 = (this->fields).winnerConditions;
    if (this_00 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,(winnerCondition->fields).id,
                 (Object *)winnerCondition,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                );
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,this->klass[1]._0.image,
                 MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                );
      WinningCondition::WinningCondition_add_OnWinningConditionChanged
                (winnerCondition,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveWinnerCondition(Int32) */

void MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_RemoveWinnerCondition
               (WinningConditionGroup *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).winnerConditions;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (pDVar1,id,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                       );
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,this->klass[1]._0.image,
               MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
              );
    if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
      pTVar3 = pTVar2->klass;
      uVar4 = 0;
      uVar5._0_1_ = (pTVar3->_1).rank;
      uVar5._1_1_ = (pTVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pTVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__IWinningCondition) {
            ppMVar6 = &(&(pTVar3->vtable).GetHashCode)[pTVar3->interfaceOffsets[uVar4].offset].
                       method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar6 = (MethodInfo **)func_?(pTVar2,TypeInfo__IWinningCondition,2);
code_?:
      (*(code *)*ppMVar6)(pTVar2,this_00,ppMVar6[1]);
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).winnerConditions;
      if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (pDVar1,id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean Traverse(Func`2[IWinningCondition,Boolean]) */

bool MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_Traverse
               (WinningConditionGroup *this,Func_2_IWinningCondition_Boolean_ *callBack,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_4 = 0;
  func_?();
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (callBack != (Func_2_IWinningCondition_Boolean_ *)0x0) {
    bVar5 = System.Core.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean__Invoke
                      ((Func_2_Object_Boolean_ *)callBack,(Object *)this,
                       MethodInfo__System__Func<IWinningCondition,_bool>__Invoke_IWinningCondition_)
    ;
    if (bVar5 != 0) {
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
    this_00 = (this->fields).winnerConditions;
    if ((this_00 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Values
                            ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Values__
                            ),
       this_01 !=
       (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffa8,this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IWinningCondition>__GetEnumerator__
                );
      uStack_1 = 0;
      do {
        cVar6 = func_?();
        if (cVar6 == '\0') {
          iVar7 = 0x4c;
          goto code_?;
        }
        piVar8 = (int *)func_?();
        if (piVar8 == (int *)0x0) goto code_?;
        iVar7 = *piVar8;
        uVar9 = 0;
        if (*(ushort *)(iVar7 + 0xb6) != 0) {
          do {
            if (*(IWinningCondition__Class **)(*(int *)(iVar7 + 0x58) + (uint)uVar9 * 8) ==
                TypeInfo__IWinningCondition) {
              puVar10 = (undefined4 *)
                       (iVar7 + 0xe0 + *(int *)(*(int *)(iVar7 + 0x58) + 4 + (uint)uVar9 * 8) * 8);
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(iVar7 + 0xb6));
        }
        puVar10 = (undefined4 *)func_?(piVar8,TypeInfo__IWinningCondition,4);
code_?:
        cVar6 = (*(code *)*puVar10)(piVar8,callBack,puVar10[1]);
      } while (cVar6 == '\0');
      bStack_4 = 1;
      iVar7 = 0x4e;
code_?:
      uStack_1 = 0xffffffff;
      func_?();
      if (iVar7 == 0x4e) {
        *unaff_FS_OFFSET = uStack_3;
        return bStack_4;
      }
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
code_?:
  func_?(0);
  func_?();
  pcVar11 = (code *)swi(3);
  bVar5 = (*pcVar11)();
  return bVar5;
}


/* WinningConditionGroup(WinningCondition, Int32, GameStatCounterManager, Int32, Boolean,
   GameStatCounterType, WinningConditionPresentStyle) */

void MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup__ctor
               (WinningConditionGroup *this,WinningCondition *parent,int32_t id,
               GameStatCounterManager *gameCounterManager,int32_t limit,bool isBriefingNode,
               GameStatCounterType__Enum gameStatCounterType,
               WinningConditionPresentStyle__Enum winningConditionPresentStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_IWinningCondition_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Dictionary__
            );
  (this->fields).winnerConditions = this_00;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)id,0.0,unaff_EDI);
  *(int32_t *)(id + 0xc) = limit;
  *(GameStatCounterManager **)(id + 0x24) = gameCounterManager;
  *(GameStatCounterType__Enum *)(id + 0x10) = gameStatCounterType;
  *(undefined1 *)(id + 0x28) = (undefined1)winningConditionPresentStyle;
  *(undefined1 *)(id + 0x18) = 0;
  *(GameStatCounterManager **)(id + 0x1c) = _isBriefingNode;
  *(undefined1 *)(id + 0x19) = in_stack_1;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__EventHandler<OnCounterTypeChangedArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)id,
             MethodInfo__WinningCondition__GameCountersQuery_OnCounterTypeChangedGameStatCounterTypeOnly_System__Object__OnCounterTypeChangedArgs_
             ,
             MethodInfo__System__EventHandler<OnCounterTypeChangedArgs>__EventHandler_System__Object__void__
            );
  if (_isBriefingNode != (GameStatCounterManager *)0x0) {
    GameStatCounterManager::GameStatCounterManager_add_OnCounterTypeChanged
              (_isBriefingNode,(EventHandler_1_OnCounterTypeChangedArgs_ *)this_01,(MethodInfo *)0x0
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 get_Length() */

int32_t MVWorldObject.dll::WinningConditionGroup::WinningConditionGroup_get_Length
                  (WinningConditionGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).winnerConditions;
  if (this_00 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Count__
                       );
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

