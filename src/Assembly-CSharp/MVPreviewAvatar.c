
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (MVAvatarLocal *)
            MVGroup::MVGroup_Clone
                      ((MVGroup *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,worldObjects,
                       prototypes,(MethodInfo *)0x0);
  if (this_00 == (MVAvatarLocal *)0x0) {
    func_?();
  }
  else {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)this_00,(MethodInfo *)0x0);
    handle = TypeRef__MVAvatarLocal;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (pTVar1 != pTVar2) {
      return (MVWorldObjectClient *)this_00;
    }
    pMVar3 = this_00->klass;
    bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
    bVar5 = (pMVar3->_1).naturalAligment;
    if ((bVar5 < bVar4) ||
       ((MVAvatarLocal__Class *)(pMVar3->_1).typeHierarchy[bVar4 - 1] != TypeInfo__MVAvatarLocal)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pMVar7 = (MVAvatarLocal *)0x0;
    if (bVar6) {
      pMVar7 = this_00;
    }
    if (pMVar7 != (MVAvatarLocal *)0x0) {
      if ((bVar5 < bVar4) ||
         ((MVAvatarLocal__Class *)(pMVar3->_1).typeHierarchy[bVar4 - 1] != TypeInfo__MVAvatarLocal))
      {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pMVar7 = (MVAvatarLocal *)0x0;
      if (bVar6) {
        pMVar7 = this_00;
      }
      if (pMVar7 != (MVAvatarLocal *)0x0) {
        MVAvatarLocal::MVAvatarLocal_set_SpawnId
                  (pMVar7,(int32_t)(this_00->fields)._.avatar,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_00;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pMVar9 = (MVWorldObjectClient *)(*pcVar8)();
  return pMVar9;
}


/* MVPreviewAvatar(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPreviewAvatar::MVPreviewAvatar__ctor
               (MVPreviewAvatar *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0)
    ;
    MVGroup::MVGroup__ctor
              ((MVGroup *)this,data,(GameObject *)prefabObject,worldObjects,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_SpawnRoleCreatorId(Int32) */

void Assembly-CSharp.dll::MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId
               (MVPreviewAvatar *this,int32_t value,MethodInfo *method)

{
  (this->fields).spawnRoleCreatorId = value;
  return;
}

