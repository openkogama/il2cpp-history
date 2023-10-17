
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
  pLVar2 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (pLVar2 != (List_1_TranslateSoundData_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    pTVar4 = (pLVar2->fields)._items;
    if (pTVar4 != (TranslateSoundData__Array *)0x0) {
      uVar5 = (pLVar2->fields)._size;
      fStack_6 = worldPos.x;
      fStack_7 = worldPos.y;
      if (pTVar4->max_length <= uVar5) {
        (*(pMVar1->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                  (pLVar2,moveValue,(uint)moveToGridPos,fStack_6,fStack_7,worldPos.z,
                   pMVar1->klass->rgctx_data[0xb].rgctxDataDummy);
        return;
      }
      (pLVar2->fields)._size = uVar5 + 1;
      if (uVar5 < pTVar4->max_length) {
        pTVar8 = pTVar4->vector + uVar5;
        pTVar8->moveValue = moveValue;
        *(uint *)&pTVar8->moveToGridPos = (uint)moveToGridPos;
        (pTVar8->worldPos).x = fStack_6;
        (pTVar8->worldPos).y = fStack_7;
        pTVar4->vector[uVar5].worldPos.z = worldPos.z;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    pLVar2 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
    if (pLVar2 != (List_1_TranslateSoundData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__TrimExcess
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar2,
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
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  auStack_6._12_4_ = (GameObject *)0x0;
  pGStack_7 = (GameObject *)0x0;
  pTStack_8 = (Text *)0x0;
  pTStack_9 = (Text *)0x0;
  pMStack_10 = (MethodInfo *)0x0;
  if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AudioEventHandler);
  }
  method_00 = (MethodInfo *)TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
             List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__GetEnumerator
                       (&LStack_12,(List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)method_00,
                        MethodInfo__System__Collections__Generic__List<TranslateSoundData>__GetEnumerator__
                       );
    uStack_13 = 0;
    auStack_6._0_4_ = pLVar11->_list;
    auStack_6._4_4_ = pLVar11->_index;
    auStack_6._8_4_ = pLVar11->_version;
    auStack_6._12_4_ = (pLVar11->_current).buttonSelected;
    pGStack_7 = (pLVar11->_current).buttonNotSelected;
    pTStack_8 = (pLVar11->_current).buttonSelectedText;
    pTStack_9 = (pLVar11->_current).buttonNotSelectedText;
    pMStack_10 = (MethodInfo *)(pLVar11->_current).team;
    uStack_1 = 1;
    pOStack_14 = (Object *)auStack_6;
    while( true ) {
      bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[TranslateSoundData]::
              List_1_T_Enumerator_TranslateSoundData__MoveNext
                        ((List_1_T_Enumerator_TranslateSoundData_ *)auStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__MoveNext__
                        );
      pMVar16 = pMStack_10;
      if (bVar15 == 0) break;
      LStack_12._current.buttonSelected = (GameObject *)auStack_6._12_4_;
      LStack_12._current.buttonNotSelected = pGStack_7;
      LStack_12._current.buttonSelectedText = pTStack_8;
      LStack_12._current.buttonNotSelectedText = pTStack_9;
      if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AudioEventHandler);
      }
      this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
      if (this == (AudioBuild *)0x0) goto code_?;
      worldPos.y = (float)LStack_12._current.buttonNotSelectedText;
      worldPos.x = (float)LStack_12._current.buttonSelectedText;
      worldPos.z = (float)pMVar16;
      AudioBuild::AudioBuild_Translate
                (this,(float)LStack_12._current.buttonSelected,
                 (bool)LStack_12._current.buttonNotSelected,worldPos,(MethodInfo *)0x0);
      method_00 = pMVar16;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)auStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AudioEventHandler);
    }
    pLVar17 = TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
    if (pLVar17 != (List_1_TranslateSoundData_ *)0x0) {
      piVar18 = &(pLVar17->fields)._version;
      *piVar18 = *piVar18 + 1;
      (pLVar17->fields)._size = 0;
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
    func_?(0xb1a4);
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
      bVar2 = 0;
      uVar3 = func_?();
      uVar4 = (uint)((ulonglong)uVar3 >> 0x20);
      uVar5 = in(0x88);
      puVar6 = (uint *)CONCAT31((int3)((ulonglong)uVar3 >> 8),uVar5);
      *puVar6 = (*puVar6 - uVar4) - (uint)bVar2;
      uVar7 = (uint)(extraout_ECX < *(uint *)(extraout_ECX + 0x89721019));
      uVar8 = *puVar6;
      uVar9 = *puVar6;
      *puVar6 = (uVar9 - uVar4) - uVar7;
      cRam_? = cRam_? + (char)((uint)unaff_EBX >> 8) +
                     (uVar8 < uVar4 || uVar9 - uVar4 < uVar7);
      pcVar10 = (code *)swi(3);
      uRam_? = unaff_EBX;
      (*pcVar10)();
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
  if (this != (List_1_TranslateSoundData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<TranslateSoundData>__List__);
    TypeInfo__AudioEventHandler->static_fields->translateSoundDatas = this;
    func_?(&TypeInfo__AudioEventHandler->static_fields->translateSoundDatas,this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

