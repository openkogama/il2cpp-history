
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_Delete
               (MVSpawnPoint *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)this_00,(MethodInfo *)0x0), this_01 != (SkyParam *)0x0))
  {
    iVar1 = MVTeamManager::MVTeamManager_get_NumSpawnPoint
                      ((MVTeamManager *)this_01,(MethodInfo *)0x0);
    if (iVar1 < 2) {
      *errorText = StringLiteral_You_cannot_delete_the_last_spawn;
      return 0;
    }
    if (pGRam00000088 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGRam00000088,0,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_Destroy(MVSpawnPoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).isInWorld != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    bVar1 = MVGameControllerBase::MVGameControllerBase_get_Quitting((MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame *)0x0) {
        this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)this_00,(MethodInfo *)0x0);
        id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
        type = System.Core.dll::System::Linq::
               Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
               Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                           *)this,(MethodInfo *)0x0);
        team = MVSpawnPoint_WOTypeToTeamIndex((WorldObjectType__Enum)type,in_stack_2);
        if (this_01 != (SkyParam *)0x0) {
          MVTeamManager::MVTeamManager_OnRemoveSpawnPoint
                    ((MVTeamManager *)this_01,(int32_t)id,team,(MethodInfo *)0x0);
          return;
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVSpawnPoint *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
  puVar2 = (undefined *)pVVar1->x;
  fVar3 = pVVar1->z;
  pSVar4 = (SharedCubeFunctions__Class *)0x40000000;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      fVar6 = pQVar5->x;
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        puVar2 = &UNK_?;
        pSVar4 = TypeInfo__SharedCubeFunctions;
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = gridSize;
      rotation.x = fVar6;
      rotation.z = (float)puVar2;
      rotation.w = (float)pSVar4;
      scale.y = (float)pSVar4;
      scale.x = (float)puVar2;
      scale.z = fVar3;
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar6 = pVVar1->y;
      fVar3 = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = fVar6;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar7)();
  return pVVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_Initialize
               (MVSpawnPoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  (this->fields).isInWorld = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    unaff_EBX = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)this_02,(MethodInfo *)0x0);
    this_03 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System
             ::Object,System::Object]::
             Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                         *)this,(MethodInfo *)0x0);
    switch(pOVar1) {
    case (Object *)0x27:
      key = MVTeam__Enum_Red;
      break;
    case (Object *)0x28:
      key = MVTeam__Enum_Green;
      break;
    case (Object *)0x29:
      key = MVTeam__Enum_Yellow;
      break;
    case (Object *)0x2a:
      key = MVTeam__Enum_Blue;
      break;
    default:
      key = MVTeam__Enum_None;
    }
    if (unaff_EBX != (SkyParam *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar2 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
               (unaff_EBX->fields).BottomColor.r;
      if (pDVar2 != (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0) {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                MVTeam,System::Object]::
                Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                          (pDVar2,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                          );
        if (bVar3 == 0) {
          pDVar2 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
                   (unaff_EBX->fields).BottomColor.r;
          this_03 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    (this_03,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          if (pDVar2 == (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
          Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                    (pDVar2,key,(Object *)this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__HashSet<int>_
                    );
        }
        pDVar2 = (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)
                 (unaff_EBX->fields).BottomColor.r;
        if ((pDVar2 != (Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)0x0) &&
           (this_04 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                      MVTeam,System::Object]::
                      Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                (pDVar2,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                                ),
           this_04 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    (this_04,(UnityWebRequest *)this_03,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          this._3_1_ = (char)((uint)pDVar2 >> 0x18);
          if (this._3_1_ != '\0') {
            this_00 = (AvatarMotor_OnActiveBounceDelegate *)(unaff_EBX->fields).TopColor.g;
            if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
              AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                        (this_00,(MethodInfo *)0x0);
            }
            this_01 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                      (unaff_EBX->fields).TopColor.b;
            if (this_01 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
              pTStack4 = TypeInfo__MV__WorldObject__TeamEventArgs;
              e = (InitializedGameQueryDataEventArgs *)func_?();
              MVWorldObject.dll::MV::WorldObject::TeamEventArgs::TeamEventArgs__ctor
                        ((TeamEventArgs *)e,key,(MethodInfo *)0x0);
              mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
              EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                        (this_01,(Object *)unaff_EBX,e,
                         MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__Invoke_System__Object__MV__WorldObject__TeamEventArgs_
                        );
            }
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  *(undefined1 *)&unaff_EBX->klass = 0x47;
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVTeam WOTypeToTeamIndex(WorldObjectType) */

MVTeam__Enum
Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint_WOTypeToTeamIndex
          (WorldObjectType__Enum type,MethodInfo *method)

{
  switch(type) {
  case WorldObjectType__Enum_SpawnPointRed:
    return MVTeam__Enum_Red;
  case WorldObjectType__Enum_SpawnPointGreen:
    return MVTeam__Enum_Green;
  case WorldObjectType__Enum_SpawnPointYellow:
    return MVTeam__Enum_Yellow;
  case WorldObjectType__Enum_SpawnPointBlue:
    return MVTeam__Enum_Blue;
  default:
    return MVTeam__Enum_None;
  }
}


/* MVSpawnPoint(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSpawnPoint::MVSpawnPoint__ctor
               (MVSpawnPoint *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  *(undefined4 *)&(this->fields)._._.interactionFlags = 0x2101;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
  return;
}

