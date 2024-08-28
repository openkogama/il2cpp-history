
/* Void AddTranslateSoundData(Single, Boolean, Vector3) */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_AddTranslateSoundData
               (float moveValue,bool moveToGridPos,Vector3 worldPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AudioEventHandler);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Add_TranslateSoundData_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AudioEventHandler);
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Add_TranslateSoundData_;
  this = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (this != (List_1_TranslateSoundData_ *)0x0) {
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pTVar3 = (this->fields)._items;
    if (pTVar3 != (TranslateSoundData__Array *)0x0) {
      uVar4 = (this->fields)._size;
      fStack_5 = worldPos.x;
      fStack_6 = worldPos.y;
      if (pTVar3->max_length <= uVar4) {
        item.moveToGridPos = moveToGridPos;
        item.moveValue = moveValue;
        item._5_3_ = 0;
        item.worldPos.x = fStack_5;
        item.worldPos.y = fStack_6;
        item.worldPos.z = worldPos.z;
        mscorlib.dll::System::Collections::Generic::List`1[TranslateSoundData]::
        List_1_TranslateSoundData__AddWithResize(this,item,pMVar1->klass->rgctx_data[0xe].method);
        return;
      }
      (this->fields)._size = uVar4 + 1;
      if (uVar4 < pTVar3->max_length) {
        pTVar7 = pTVar3->vector + uVar4;
        pTVar7->moveValue = moveValue;
        *(uint *)&pTVar7->moveToGridPos = (uint)moveToGridPos;
        (pTVar7->worldPos).x = fStack_5;
        (pTVar7->worldPos).y = fStack_6;
        pTVar3->vector[uVar4].worldPos.z = worldPos.z;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<TranslateSoundData>__TrimExcess__;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__AudioEventHandler->static_fields->audioBuild = (AudioBuild *)0x0;
  func_?();
  pLVar2 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (pLVar2 != (List_1_TranslateSoundData_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar2->fields)._size = 0;
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
    if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__TrimExcess
                (this,
                 MethodInfo__System__Collections__Generic__List<TranslateSoundData>__TrimExcess__);
      return;
    }
  }
  uVar4 = func_?(&ppMStack_1);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleTranslateData() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_HandleTranslateData
               (MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AudioEventHandler);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TranslateSoundData>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AudioEventHandler);
  }
  method_00 = (MethodInfo *)TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Linq::Expressions::
             Interpreter::InstructionList+DebugView+InstructionView]::
             List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_
                         *)method_00,
                        MethodInfo__System__Collections__Generic__List<TranslateSoundData>__GetEnumerator__
                       );
    uStack_8 = 0;
    LStack_9._list = (List_1_TranslateSoundData_ *)pLVar6->_list;
    LStack_9._index = pLVar6->_index;
    LStack_9._version = pLVar6->_version;
    LStack_9._current.moveValue = (float)(pLVar6->_current)._index;
    LStack_9._current._4_4_ = (pLVar6->_current)._stackDepth;
    LStack_9._current.worldPos.x = (float)(pLVar6->_current)._continuationsDepth;
    LStack_9._current.worldPos.y = (float)(pLVar6->_current)._name;
    LStack_9._current.worldPos.z = (float)(pLVar6->_current)._instruction;
    uStack_1 = 1;
    pLStack_10 = &LStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[TranslateSoundData]::
              List_1_T_Enumerator_TranslateSoundData__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__MoveNext__
                        );
      pMVar12 = (MethodInfo *)LStack_9._current.worldPos.z;
      if (bVar11 == 0) break;
      LStack_7._current._index = (int32_t)LStack_9._current.moveValue;
      LStack_7._current._stackDepth = LStack_9._current._4_4_;
      LStack_7._current._continuationsDepth = (int32_t)LStack_9._current.worldPos.x;
      LStack_7._current._name = (String *)LStack_9._current.worldPos.y;
      if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AudioEventHandler);
      }
      this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
      if (this == (AudioBuild *)0x0) goto code_?;
      worldPos.y = (float)LStack_7._current._name;
      worldPos.x = (float)LStack_7._current._continuationsDepth;
      worldPos.z = (float)pMVar12;
      AudioBuild::AudioBuild_Translate
                (this,(float)LStack_7._current._index,(bool)LStack_7._current._stackDepth,worldPos
                 ,(MethodInfo *)0x0);
      method_00 = pMVar12;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AudioEventHandler);
    }
    pLVar13 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
    if (pLVar13 != (List_1_TranslateSoundData_ *)0x0) {
      piVar14 = &(pLVar13->fields)._version;
      *piVar14 = *piVar14 + 1;
      (pLVar13->fields)._size = 0;
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Init(AudioBuild) */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_Init
               (AudioBuild *audioBuild,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AudioEventHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AudioEventHandler);
  }
  TypeInfo__AudioEventHandler->static_fields->audioBuild = audioBuild;
  func_?(TypeInfo__AudioEventHandler->static_fields,audioBuild);
  return;
}


/* Void PlaySound(AudioActions, IntVector, GameObject) */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_PlaySound
               (AudioActions__Enum audioAction,IntVector localPos,GameObject *gameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AudioEventHandler);
    func_?(0xc5dc);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pVVar1 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                     ((Vector3 *)&stack0xfffffff0,gameObject,localPos,(MethodInfo *)0x0);
  worldPos = *pVVar1;
  switch(audioAction) {
  case AudioActions__Enum_CubeAdded:
    if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) {
code_?:
      uVar2 = func_?();
      uVar3 = (uint)((ulonglong)uVar2 >> 0x20);
      uVar4 = in(0x59);
      puVar5 = (uint *)CONCAT31((int3)((ulonglong)uVar2 >> 8),uVar4);
      *puVar5 = *puVar5 & uVar3;
      *(char *)(uVar3 + 0x5a) =
           *(char *)(uVar3 + 0x5a) + (char)((ulonglong)uVar2 >> 0x28) +
           (unaff_EBX < *(uint *)(uVar3 + 0x21));
      *puVar5 = *puVar5 & uVar3;
      *puVar5 = *puVar5 & unaff_retaddr;
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    randMax = 1.1;
    randMin = 0.8;
    audioClip = (this->fields).cubeAdded;
    break;
  case AudioActions__Enum_CubeRemoved:
    if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    randMax = 1.0;
    randMin = 1.0;
    audioClip = (this->fields).cubeRemoved;
    break;
  case AudioActions__Enum_FaceMoved:
    if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    randMax = 1.4;
    randMin = 0.5;
    audioClip = (this->fields).faceMoved;
    break;
  case AudioActions__Enum_EdgeMoved:
    if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    randMax = 1.0;
    randMin = 1.0;
    audioClip = (this->fields).edgeMoved;
    break;
  case AudioActions__Enum_VertexMoved:
    if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    randMax = 1.0;
    randMin = 1.0;
    audioClip = (this->fields).vertexMoved;
    break;
  case AudioActions__Enum_CubePainted:
    if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    randMax = 1.0;
    randMin = 1.0;
    audioClip = (this->fields).cubePainted;
    break;
  default:
    goto code_?;
  }
  AudioBuild::AudioBuild_PlayClip(this,worldPos,audioClip,randMin,randMax,(MethodInfo *)0x0);
code_?:
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AudioEventHandler);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AudioEventHandler);
  }
  AudioEventHandler_HandleTranslateData((MethodInfo *)0x0);
  return;
}


/* AudioEventHandler() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AudioEventHandler);
    func_?(&MethodInfo__System__Collections__Generic__List<TranslateSoundData>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<TranslateSoundData>);
    cRam_? = '\x01';
  }
  this = (List_1_TranslateSoundData_ *)
         func_?(TypeInfo__System__Collections__Generic__List<TranslateSoundData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<TranslateSoundData>__List__);
  TypeInfo__AudioEventHandler->static_fields->translateSoundDatas = this;
  func_?(&TypeInfo__AudioEventHandler->static_fields->translateSoundDatas,this);
  return;
}

