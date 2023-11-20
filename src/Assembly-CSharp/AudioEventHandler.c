
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
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  auStack_6._12_4_ = 0.0;
  pSStack_7 = (String *)0x0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  pMStack_10 = (MethodInfo *)0x0;
  if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AudioEventHandler);
  }
  method_00 = (MethodInfo *)TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__GetEnumerator
                       (&LStack_12,
                        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                         *)method_00,
                        MethodInfo__System__Collections__Generic__List<TranslateSoundData>__GetEnumerator__
                       );
    uStack_13 = 0;
    auStack_6._0_4_ = pLVar11->_list;
    auStack_6._4_4_ = pLVar11->_index;
    auStack_6._8_4_ = pLVar11->_version;
    auStack_6._12_4_ = (pLVar11->_current).index;
    pSStack_7 = (pLVar11->_current).name;
    fStack_8 = (pLVar11->_current).actualWidth;
    fStack_9 = (pLVar11->_current).width;
    pMStack_10 = *(MethodInfo **)&(pLVar11->_current).visible;
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
      LStack_12._current.index = auStack_6._12_4_;
      LStack_12._current.name = pSStack_7;
      LStack_12._current.actualWidth = fStack_8;
      LStack_12._current.width = fStack_9;
      if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AudioEventHandler);
      }
      this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
      if (this == (AudioBuild *)0x0) goto code_?;
      worldPos.y = LStack_12._current.width;
      worldPos.x = LStack_12._current.actualWidth;
      worldPos.z = (float)pMVar16;
      AudioBuild::AudioBuild_Translate
                (this,(float)LStack_12._current.index,(bool)LStack_12._current.name,worldPos,
                 (MethodInfo *)0x0);
      method_00 = pMVar16;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    func_?(0x845c);
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
      uVar4 = in(0x9a);
      puVar5 = (uint *)CONCAT31((int3)((ulonglong)uVar2 >> 8),uVar4);
      *puVar5 = *puVar5 & uVar3;
      *puVar5 = *puVar5 & uVar3;
      *puVar5 = *puVar5 & uVar3;
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

