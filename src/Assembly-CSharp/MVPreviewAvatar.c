
/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVPreviewAvatar::MVPreviewAvatar_Clone
          (MVPreviewAvatar *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0;
  pMVar2 = MVGroup::MVGroup_Clone
                     ((MVGroup *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,worldObjects,
                      prototypes,(MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    lVar3 = FUN_?(&(pMVar2->klass->_0).byval_arg);
    pIVar4 = TypeRef__MVAvatarLocal;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pIVar4 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar1 = FUN_?(pIVar4,1);
      lVar1 = FUN_?(lVar1 + 0x20);
    }
    if (lVar3 == lVar1) {
      bVar5 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if (((pMVar2->klass->_1).naturalAligment < bVar5) ||
         ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
          TypeInfo__MVAvatarLocal)) {
        FUN_?(pMVar2);
        pcVar6 = (code *)swi(3);
        pMVar2 = (MVWorldObjectClient *)(*pcVar6)();
        return pMVar2;
      }
      pMVar2[2].fields._.groupId = (this->fields).spawnRoleCreatorId;
    }
    return pMVar2;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pMVar2 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar2;
}


/* MVPreviewAvatar(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPreviewAvatar::MVPreviewAvatar__ctor
               (MVPreviewAvatar *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVGroup::MVGroup__ctor
              ((MVGroup *)this,data,(pPVar1->fields).mvPreviewAvatarPrefab,worldObjects,
               (MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_SpawnRoleCreatorId(Int32) */

void Assembly-CSharp.dll::MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId
               (MVPreviewAvatar *this,int32_t value,MethodInfo *method)

{
  (this->fields).spawnRoleCreatorId = value;
  return;
}

