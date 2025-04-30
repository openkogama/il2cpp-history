
/* Void Execute() */

void Assembly-CSharp.dll::RTG::TerrainGizmoVerticalOffsetDragEndAction::
     TerrainGizmoVerticalOffsetDragEndAction_Execute
               (TerrainGizmoVerticalOffsetDragEndAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (RTUndoRedo *)
            MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
  if (this_00 != (RTUndoRedo *)0x0) {
    RTUndoRedo::RTUndoRedo_RecordAction(this_00,(IUndoRedoAction *)this,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Redo() */

void Assembly-CSharp.dll::RTG::TerrainGizmoVerticalOffsetDragEndAction::
     TerrainGizmoVerticalOffsetDragEndAction_Redo
               (TerrainGizmoVerticalOffsetDragEndAction *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._terrain;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if ((bVar2 != 0) && ((this->fields)._postChangeHeights != (Single__Array_1 *)0x0)) {
    pTVar1 = (this->fields)._terrain;
    if (pTVar1 == (Terrain *)0x0) goto code_?;
    this_01 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                        (pTVar1,(MethodInfo *)0x0);
    if (this_01 == (TerrainData *)0x0) goto code_?;
    UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_SetHeights
              (this_01,0,0,(this->fields)._postChangeHeights,(MethodInfo *)0x0);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._affectedObjects;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__GetEnumerator__
                       );
    RVar4 = pLVar3->_current;
    while( true ) {
      do {
        RVar5 = RVar4;
        this_03 = (List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8;
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (this_03,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__MoveNext__
                          );
        if (bVar2 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__Dispose__
                     ,unaff_retaddr);
          *unaff_FS_OFFSET = this_03;
          return;
        }
        if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
        x = *(Object_1 **)((int)RVar5 + 8);
        RVar4 = RVar5;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      } while (bVar2 == 0);
      if (*(GameObject **)((int)RVar5 + 8) == (GameObject *)0x0) break;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (*(GameObject **)((int)RVar5 + 8),(MethodInfo *)0x0);
      if (this_02 == (Transform *)0x0) break;
      RVar4 = (RegexCharClass_SingleRange)((Vector3 *)((int)RVar5 + 0x18))->x;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_02,*(Vector3 *)((int)RVar5 + 0x18),(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::TerrainGizmoVerticalOffsetDragEndAction::
     TerrainGizmoVerticalOffsetDragEndAction_Undo
               (TerrainGizmoVerticalOffsetDragEndAction *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._terrain;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if ((bVar2 != 0) && ((this->fields)._preChangeHeights != (Single__Array_1 *)0x0)) {
    pTVar1 = (this->fields)._terrain;
    if (pTVar1 == (Terrain *)0x0) goto code_?;
    this_01 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                        (pTVar1,(MethodInfo *)0x0);
    if (this_01 == (TerrainData *)0x0) goto code_?;
    UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_SetHeights
              (this_01,0,0,(this->fields)._preChangeHeights,(MethodInfo *)0x0);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields)._affectedObjects;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd8,this_00,
                        MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__GetEnumerator__
                       );
    RVar4 = pLVar3->_current;
    while( true ) {
      do {
        RVar5 = RVar4;
        this_03 = (List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8;
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (this_03,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__MoveNext__
                          );
        if (bVar2 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::TerrainGizmoAffectedObject>__Dispose__
                     ,unaff_retaddr);
          *unaff_FS_OFFSET = this_03;
          return;
        }
        if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
        x = *(Object_1 **)((int)RVar5 + 8);
        RVar4 = RVar5;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      } while (bVar2 == 0);
      if (*(GameObject **)((int)RVar5 + 8) == (GameObject *)0x0) break;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (*(GameObject **)((int)RVar5 + 8),(MethodInfo *)0x0);
      if (this_02 == (Transform *)0x0) break;
      RVar4 = (RegexCharClass_SingleRange)((Vector3 *)((int)RVar5 + 0xc))->x;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_02,*(Vector3 *)((int)RVar5 + 0xc),(MethodInfo *)0x0);
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* TerrainGizmoVerticalOffsetDragEndAction(Terrain, Single[,], Single[,],
   List`1[RTG.TerrainGizmoAffectedObject]) */

void Assembly-CSharp.dll::RTG::TerrainGizmoVerticalOffsetDragEndAction::
     TerrainGizmoVerticalOffsetDragEndAction__ctor
               (TerrainGizmoVerticalOffsetDragEndAction *this,Terrain *terrain,
               Single__Array_1 *preChangeHeights,Single__Array_1 *postChangeHeights,
               List_1_RTG_TerrainGizmoAffectedObject_ *affectedObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__List_System__Collections__Generic__IEnumerable<RTG::TerrainGizmoAffectedObject>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  ppTVar1 = &(this->fields)._terrain;
  *ppTVar1 = terrain;
  func_?(ppTVar1,terrain);
  if (preChangeHeights != (Single__Array_1 *)0x0) {
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
             PlayableBehaviour_Clone((PlayableBehaviour *)preChangeHeights,(MethodInfo *)0x0);
    ppSVar3 = &(this->fields)._preChangeHeights;
    pSVar4 = (Single__Array_1 *)func_?(pOVar2,TypeInfo__System__Single);
    *ppSVar3 = pSVar4;
    uVar5 = func_?(pOVar2,TypeInfo__System__Single);
    func_?(ppSVar3,uVar5);
  }
  if (postChangeHeights != (Single__Array_1 *)0x0) {
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
             PlayableBehaviour_Clone((PlayableBehaviour *)postChangeHeights,(MethodInfo *)0x0);
    ppSVar3 = &(this->fields)._postChangeHeights;
    pSVar4 = (Single__Array_1 *)func_?(pOVar2,TypeInfo__System__Single);
    *ppSVar3 = pSVar4;
    uVar5 = func_?(pOVar2,TypeInfo__System__Single);
    func_?(ppSVar3,uVar5);
  }
  this_00 = (List_1_RTG_TerrainGizmoAffectedObject_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)affectedObjects,
             MethodInfo__System__Collections__Generic__List<RTG::TerrainGizmoAffectedObject>__List_System__Collections__Generic__IEnumerable<RTG::TerrainGizmoAffectedObject>_
            );
  (this->fields)._affectedObjects = this_00;
  func_?(&this->fields,this_00);
  return;
}

