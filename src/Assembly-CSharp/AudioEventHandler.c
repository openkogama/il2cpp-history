
/* Void AddTranslateSoundData(Single, Boolean, Vector3) */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_AddTranslateSoundData
               (float moveValue,bool moveToGridPos,Vector3 worldPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
    func_?();
  }
  this = (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)
         TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  iStack_5 = 0;
  func_?(&uStack_1,moveValue,_moveToGridPos);
  if (this != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
    item.buttonNotSelected = (GameObject *)uStack_2;
    item.buttonSelected = (GameObject *)uStack_1;
    item.buttonSelectedText = (Text *)uStack_3;
    item.buttonNotSelectedText = (Text *)uStack_4;
    item.team = iStack_5;
    mscorlib.dll::System::Collections::Generic::List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
    List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__Add
              (this,item,
               MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Add_TranslateSoundData_
              );
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__AudioEventHandler);
  }
  TypeInfo__AudioEventHandler->static_fields->audioBuild = (AudioBuild *)0x0;
  this = (List_1_UnityEngine_UIVertex_ *)
         TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (this != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this,MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Clear__);
    this_00 = (List_1_VoxelHit_ *)TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
    if (this_00 != (List_1_VoxelHit_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__TrimExcess
                (this_00,
                 MethodInfo__System__Collections__Generic__List<TranslateSoundData>__TrimExcess__);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleTranslateData() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_HandleTranslateData
               (MethodInfo *method)

{
  fStack_1 = -NAN;
  puStack_2 = &DAT_?;
  fStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&fStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSStack_6 = (Selectable__Class *)0x0;
  pMStack_7 = (MonitorData *)0x0;
  UStack_8._._._._.m_CachedPtr = (MonoBehaviour__Fields)(Behaviour__Fields)0x0;
  pMStack_9 = (MethodInfo *)0x0;
  pSStack_10 = (Selectable *)0x0;
  pSStack_11 = (Selectable *)0x0;
  pSStack_12 = (Selectable *)0x0;
  pSStack_13 = (Selectable *)0x0;
  func_?();
  puStack_14 = (undefined4 *)&stack0xffffff84;
  puStack_4 = &stack0xffffff84;
  if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_14 = (undefined4 *)&stack0xffffff84, puStack_4 = &stack0xffffff84,
     (TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
    puStack_14 = (undefined4 *)&stack0xffffff84;
    puStack_4 = &stack0xffffff84;
    func_?(TypeInfo__AudioEventHandler);
  }
  this = (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)
         TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
  if (this != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
    pLVar15 = mscorlib.dll::System::Collections::Generic::
             List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
             List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__GetEnumerator
                       (&LStack_16,this,
                        MethodInfo__System__Collections__Generic__List<TranslateSoundData>__GetEnumerator__
                       );
    pSStack_6 = (Selectable__Class *)pLVar15->l;
    pSStack_10 = (Selectable *)(pLVar15->current).buttonNotSelected;
    pSStack_11 = (Selectable *)(pLVar15->current).buttonSelectedText;
    pSStack_12 = (Selectable *)(pLVar15->current).buttonNotSelectedText;
    pSStack_13 = (Selectable *)(pLVar15->current).team;
    fStack_1 = 0.0;
    while( true ) {
      pMStack_9 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__MoveNext__
      ;
      UStack_8._._._._.m_CachedPtr = (MonoBehaviour__Fields)&pSStack_6;
      cVar17 = func_?();
      if (cVar17 == '\0') break;
      pNVar18 = UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_get_navigation
                         ((Navigation *)&LStack_16.current,(Selectable *)&pSStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__get_Current__
                         );
      fStack_19 = (float)pNVar18->m_Mode;
      pSStack_20 = pNVar18->m_SelectOnUp;
      pSStack_21 = pNVar18->m_SelectOnDown;
      pSStack_22 = pNVar18->m_SelectOnLeft;
      pSVar23 = pNVar18->m_SelectOnRight;
      if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__AudioEventHandler);
      }
      this_00 = TypeInfo__AudioEventHandler->static_fields->audioBuild;
      if (this_00 == (AudioBuild *)0x0) goto code_?;
      worldPos.y = (float)pSStack_22;
      worldPos.x = (float)pSStack_21;
      worldPos.z = (float)pSVar23;
      AudioBuild::AudioBuild_Translate
                (this_00,fStack_19,(bool)pSStack_20,worldPos,(MethodInfo *)0x0);
    }
    *puStack_14 = 0x56;
    fStack_1 = -NAN;
    func_?(&pSStack_6,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<TranslateSoundData>__Dispose__
                   );
    if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
      func_?(TypeInfo__AudioEventHandler);
    }
    this_01 = (List_1_UnityEngine_UIVertex_ *)
              TypeInfo__AudioEventHandler->static_fields->translateSoundDatas;
    if (this_01 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_01,MethodInfo__System__Collections__Generic__List<TranslateSoundData>__Clear__
                );
      *unaff_FS_OFFSET = fStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void Init(AudioBuild) */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_Init
               (AudioBuild *audioBuild,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__AudioEventHandler);
    TypeInfo__AudioEventHandler->static_fields->audioBuild = audioBuild;
    return;
  }
  TypeInfo__AudioEventHandler->static_fields->audioBuild = audioBuild;
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void PlaySound(AudioActions, IntVector, GameObject) */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler_PlaySound
               (AudioActions__Enum audioAction,IntVector localPos,GameObject *gameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
    func_?(TypeInfo__SharedCubeFunctions);
  }
  pVVar1 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                     ((Vector3 *)&stack0xfffffff0,gameObject,localPos,(MethodInfo *)0x0);
  worldPos = *pVVar1;
  switch(audioAction) {
  case AudioActions__Enum_CubeAdded:
    if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) {
code_?:
      bVar2 = false;
      func_?();
      if (bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    randMax = 1.1;
    randMin = 0.8;
    audioClip = (this->fields).cubeAdded;
    break;
  case AudioActions__Enum_CubeRemoved:
    if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    randMax = 1.0;
    randMin = 1.0;
    audioClip = (this->fields).cubeRemoved;
    break;
  case AudioActions__Enum_FaceMoved:
    if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    randMax = 1.4;
    randMin = 0.5;
    audioClip = (this->fields).faceMoved;
    break;
  case AudioActions__Enum_EdgeMoved:
    if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    randMax = 1.0;
    randMin = 1.0;
    audioClip = (this->fields).edgeMoved;
    break;
  case AudioActions__Enum_VertexMoved:
    if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
      func_?();
    }
    this = TypeInfo__AudioEventHandler->static_fields->audioBuild;
    if (this == (AudioBuild *)0x0) goto code_?;
    randMax = 1.0;
    randMin = 1.0;
    audioClip = (this->fields).vertexMoved;
    break;
  case AudioActions__Enum_CubePainted:
    if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__AudioEventHandler);
  }
  AudioEventHandler_HandleTranslateData((MethodInfo *)0x0);
  return;
}


/* AudioEventHandler() */

void Assembly-CSharp.dll::AudioEventHandler::AudioEventHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (List_1_TranslateSoundData_ *)
         func_?(TypeInfo__System__Collections__Generic__List<TranslateSoundData>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this,
             MethodInfo__System__Collections__Generic__List<TranslateSoundData>__List__);
  TypeInfo__AudioEventHandler->static_fields->translateSoundDatas = this;
  return;
}

