
/* IntVector FaceToOffset(Face) */

IntVector Assembly-CSharp.dll::SprayCursor::SprayCursor_FaceToOffset
                    (SprayCursor *this,Face__Enum face,MethodInfo *method)

{
  switch(method) {
  case (MethodInfo *)0x0:
    uVar1 = 0;
    uVar2 = 1;
    goto code_?;
  case (MethodInfo *)0x1:
    uVar1 = 0;
    uVar2 = 0xffffffff;
    goto code_?;
  case (MethodInfo *)0x2:
    uVar1 = 0xffffffff;
    break;
  case (MethodInfo *)0x3:
    uVar1 = 1;
    break;
  case (MethodInfo *)0x4:
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xffffffff;
    goto code_?;
  case (MethodInfo *)0x5:
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 1;
    goto code_?;
  default:
    uVar1 = 0;
  }
  uVar2 = 0;
code_?:
  uVar3 = 0;
code_?:
  pSStack_4 = (SprayCursor__Class *)0x0;
  uStack_5 = 0;
  func_?(&pSStack_4,uVar3,uVar2,uVar1,0);
  this->klass = pSStack_4;
  *(undefined2 *)&this->monitor = uStack_5;
  IVar6.z = extraout_DX;
  IVar6._0_4_ = this;
  return IVar6;
}


/* Void Remove() */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_Remove(SprayCursor *this,MethodInfo *method)

{
  pCVar1 = (this->fields).sprayCursor;
  if (pCVar1 == (CellCursor *)0x0) {
    uStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_2 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xffffffb8;
  puVar7 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar7 = puStack_6;
  }
  puStack_6 = puVar7;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(pCVar1->fields).cursorCubes;
  puStack_9 = (undefined4 *)&stack0xffffffb8;
  puStack_6 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_9 = (undefined4 *)&stack0xffffffb8;
    puStack_6 = &stack0xffffffb8;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_11,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar10->l;
    CStack_8.monitor = (MonitorData *)pLVar10->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10->ver;
    CStack_8.fields.syncRoot = (Object *)(pLVar10->current).rgba;
    uStack_2 = 0;
    while (cVar12 = func_?(), cVar12 != '\0') {
      pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_8,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                         );
      if (pOVar13 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      obj = (Object_1 *)pOVar13[3].monitor;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
    }
    *puStack_9 = 0x3e;
    uStack_2 = 0xffffffff;
    func_?(&CStack_8,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   );
    this_01 = (List_1_UnityEngine_UIVertex_ *)(pCVar1->fields).cursorCubes;
    if (this_01 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__);
      *unaff_FS_OFFSET = uStack_5;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_UpdateCursor
               (SprayCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool addCube,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (addCube != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar3 == (GameEventManager *)0x0) ||
        (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
        pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
       (pGVar5 = (pGVar4->fields).LaserCommands,
       pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
    goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
              (pGVar5,(this->fields).addCubeLaserOnTime,(MethodInfo *)0x0);
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).addCubeTime = fVar6;
  }
  pCVar7 = (this->fields).sprayCursor;
  unaff_EBX = selectedCube;
  if (selectedCube == (CubePickingInfo *)0x0) {
    if (pCVar7 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar7,0,(MethodInfo *)0x0);
      return;
    }
  }
  else if (pCVar7 != (CellCursor *)0x0) {
    CellCursor::CellCursor_set_Active(pCVar7,1,(MethodInfo *)0x0);
    uStack_8._0_2_ = (selectedCube->fields).iLocalPos.x;
    uStack_8._2_2_ = (selectedCube->fields).iLocalPos.y;
    in_stack_9 = (selectedCube->fields).iLocalPos.z;
    switch((selectedCube->fields).pickedFace) {
    case 0:
      uStack_10 = 0;
      uStack_11 = 0;
      func_?(&uStack_10,0,1,0,0);
      uVar12 = uStack_10;
      uVar13 = uStack_11;
      break;
    case 1:
      uStack_14 = 0;
      uStack_15 = 0;
      func_?(&uStack_14,0,0xffffffff,0,0);
      uVar12 = uStack_14;
      uVar13 = uStack_15;
      break;
    case 2:
      uStack_16 = 0;
      uStack_17 = 0;
      func_?(&uStack_16,0,0,0xffffffff,0);
      uVar12 = uStack_16;
      uVar13 = uStack_17;
      break;
    case 3:
      uStack_18 = 0;
      uStack_19 = 0;
      func_?(&uStack_18,0,0,1,0);
      uVar12 = uStack_18;
      uVar13 = uStack_19;
      break;
    case 4:
      uStack_20 = 0;
      uStack_21 = 0;
      func_?(&uStack_20,0xffffffff,0,0,0);
      uVar12 = uStack_20;
      uVar13 = uStack_21;
      break;
    case 5:
      uStack_22 = 0;
      uStack_23 = 0;
      func_?(&uStack_22,1,0,0,0);
      uVar12 = uStack_22;
      uVar13 = uStack_23;
      break;
    default:
      uStack_24 = 0;
      uStack_25 = 0;
      func_?(&uStack_24,0,0,0,0);
      uVar12 = uStack_24;
      uVar13 = uStack_25;
    }
    if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
      uVar1 = 0x1017;
      func_?(TypeInfo__MV__WorldObject__IntVector);
    }
    IVar26.z = (int16_t)uStack_8;
    IVar26._0_4_ = &uStack_24;
    i2.y = in_stack_27;
    i2.x = in_stack_9;
    i2.z = (int16_t)uVar12;
    IVar26 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                       (IVar26,i2,(MethodInfo *)CONCAT22(uVar1,uVar13));
    unaff_EDI = (byte *)*IVar26._0_4_;
    in_stack_9 = *(int16_t *)(IVar26._0_4_ + 1);
    pCVar7 = (this->fields).sprayCursor;
    if ((targetCubeModel != (MVCubeModelBase *)0x0) &&
       (cubeGameObject =
             DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)targetCubeModel,(MethodInfo *)0x0),
       pCVar7 != (CellCursor *)0x0)) {
      position.z = in_stack_9;
      position._0_4_ = unaff_EDI;
      CellCursor::CellCursor_SetCursor_1
                (pCVar7,position,(GameObject *)cubeGameObject,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar3 != (GameEventManager *)0x0) &&
          (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
          pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar5 = (pGVar4->fields).LaserCommands,
         pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (pGVar5,(selectedCube->fields).point,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  cVar28 = '\0';
  func_?(0);
  bVar29 = (byte)extraout_EDX;
  cVar28 = (char)((uint)unaff_EBX >> 8) + bVar29 + cVar28;
  bVar30 = *unaff_EDI;
  *unaff_EDI = *unaff_EDI - bVar29;
  bVar29 = bVar29 + cVar28 + (bVar30 < bVar29);
  pcVar31 = (char *)CONCAT31((int3)((uint)extraout_EDX >> 8),bVar29);
  bVar30 = *unaff_EDI;
  *unaff_EDI = *unaff_EDI - bVar29;
  *pcVar31 = *pcVar31 + (char)unaff_EBX + (bVar30 < bVar29);
  pcVar32 = *(char **)unaff_EDI;
  *(int *)unaff_EDI = *(int *)unaff_EDI - (int)pcVar31;
  *pcVar31 = *pcVar31 + cVar28 + (pcVar32 < pcVar31);
  pcVar32 = *(char **)unaff_EDI;
  *(int *)unaff_EDI = *(int *)unaff_EDI - (int)pcVar31;
  pcVar31[0x29] = pcVar31[0x29] + (char)unaff_EBX + (pcVar32 < pcVar31);
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* SprayCursor(Vector3[]) */

void Assembly-CSharp.dll::SprayCursor::SprayCursor__ctor
               (SprayCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).addCubeLaserOnTime = 0.2;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    material = PrefabPool::PrefabPool_get_CellCursorMaterial(this_00,(MethodInfo *)0x0);
    this_01 = (CellCursor *)func_?(TypeInfo__CellCursor);
    CellCursor::CellCursor__ctor(this_01,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
    (this->fields).sprayCursor = this_01;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

