
/* GamePassTier GetGamePassTierWithPreview() */

GamePassTier__Enum
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::
PlayerPlanetData_GetGamePassTierWithPreview(PlayerPlanetData *this,MethodInfo *method)

{
  uVar1 = mscorlib.dll::System::Math::Math_Max
                    ((this->fields).gamePassTier,(this->fields).previewGamePassTier,
                     (MethodInfo *)0x0);
  return CONCAT31(extraout_var,uVar1);
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::
         PlayerPlanetData_ToString(PlayerPlanetData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,7);
  iStack_1 = (this->fields).rank;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    iStack_5 = (this->fields).highScoreGamePoints;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    iStack_6 = (this->fields).progressionGamePoints;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    uStack_7 = (this->fields).gamePassTier;
    pOVar2 = (Object *)func_?(TypeInfo__MV__Common__GamePassTier,&uStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar2;
    uStack_8 = (this->fields).previewGamePassTier;
    pOVar2 = (Object *)func_?(TypeInfo__MV__Common__GamePassTier,&uStack_8);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar2;
    uStack_9 = (undefined4)(this->fields).playtime._ticks;
    uStack_10 = *(undefined4 *)((int)&(this->fields).playtime._ticks + 4);
    pOVar2 = (Object *)func_?(TypeInfo__System__TimeSpan,&uStack_9);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar2;
    pPVar11 = (this->fields).playerPlanetMetaData;
    if (pPVar11 == (PlayerPlanetMetaDataClient *)0x0) {
code_?:
      if (6 < args->max_length) {
        args->vector[6] = (Object *)pPVar11;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar12 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_rank__0___highScoreGamePoints__1,args,(MethodInfo *)0x0);
        return pSVar12;
      }
      goto code_?;
    }
    iVar4 = func_?(pPVar11,(args->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar13 = (code *)swi(3);
  pSVar12 = (String *)(*pcVar13)();
  return pSVar12;
}


/* Void UpdateWithPurchase(Int32, GamePassTier) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::
     PlayerPlanetData_UpdateWithPurchase
               (PlayerPlanetData *this,int32_t deltaGamePoints,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  piVar1 = &(this->fields).progressionGamePoints;
  *piVar1 = *piVar1 + deltaGamePoints;
  (this->fields).gamePassTier = (undefined1)gamePassTier;
  return;
}


/* PlayerPlanetData() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::PlayerPlanetData__ctor
               (PlayerPlanetData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeSpan);
  }
  uVar1 = *(undefined4 *)((int)&(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks + 4);
  *(int *)&(this->fields).playtime._ticks =
       (int)(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks;
  *(undefined4 *)((int)&(this->fields).playtime._ticks + 4) = uVar1;
  method_00 = TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient;
  this_00 = (PlayerPlanetMetaDataClient *)func_?();
  PlayerPlanetMetaDataClient::PlayerPlanetMetaDataClient__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).playerPlanetMetaData = this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* PlayerPlanetData(Int32, Int32, TimeSpan, GamePassTier, GamePassTier, Int32,
   PlayerPlanetMetaDataClient) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetData::PlayerPlanetData__ctor_1
               (PlayerPlanetData *this,int32_t highScoreGamePoints,int32_t progressionGamePoints,
               TimeSpan playtime,GamePassTier__Enum gamePassTier,
               GamePassTier__Enum previewGamePassTier,int32_t rank,
               PlayerPlanetMetaDataClient *playerPlanetMetaData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeSpan);
  }
  uVar1 = *(undefined4 *)((int)&(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks + 4);
  *(int *)&(this->fields).playtime._ticks =
       (int)(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks;
  *(undefined4 *)((int)&(this->fields).playtime._ticks + 4) = uVar1;
  method_00 = TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetMetaDataClient;
  this_00 = (PlayerPlanetMetaDataClient *)func_?();
  PlayerPlanetMetaDataClient::PlayerPlanetMetaDataClient__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).playerPlanetMetaData = this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).highScoreGamePoints = highScoreGamePoints;
  (this->fields).rank = previewGamePassTier;
  (this->fields).progressionGamePoints = progressionGamePoints;
  (this->fields).gamePassTier = playtime._ticks._4_1_;
  (this->fields).previewGamePassTier = (undefined1)gamePassTier;
  *(undefined4 *)&(this->fields).playtime._ticks = in_stack_2;
  *(undefined4 *)((int)&(this->fields).playtime._ticks + 4) = (undefined4)playtime._ticks;
  if (rank != 0) {
    method_01 = *(MethodInfo **)(rank + 0x14);
    fVar3 = *(float *)(rank + 0x18);
    pTVar4 = *(Transform **)(rank + 0x1c);
    uVar5 = *(undefined1 *)(rank + 8);
    uVar6 = *(undefined1 *)(rank + 9);
    this_01 = (ScaleAnimationBase *)func_?(*(undefined4 *)(rank + 0x10));
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__DateTime);
    }
    pDVar7 = TypeInfo__System__DateTime->static_fields;
    fVar8 = 0.0;
    fVar9 = *(float *)((int)&(pDVar7->MinValue).ticks._ticks + 4);
    fVar10 = (float)(pDVar7->MinValue).kind;
    pTVar11 = *(Transform **)&(pDVar7->MinValue).field_0xc;
    (this_01->fields).originalScale.x = *(float *)&(pDVar7->MinValue).ticks._ticks;
    (this_01->fields).originalScale.y = fVar9;
    (this_01->fields).originalScale.z = fVar10;
    (this_01->fields).target = pTVar11;
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_01);
    *(undefined1 *)&(this_01->fields)._._._._.m_CachedPtr = uVar5;
    *(undefined1 *)((int)&(this_01->fields)._._._._.m_CachedPtr + 1) = uVar6;
    (this_01->fields).originalScale.x = fVar8;
    (this_01->fields).originalScale.y = (float)method_01;
    (this_01->fields).originalScale.z = fVar3;
    (this_01->fields).target = pTVar4;
    (this->fields).playerPlanetMetaData = (PlayerPlanetMetaDataClient *)this_01;
    return;
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

