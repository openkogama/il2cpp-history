
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
    func_?(&TypeRef__MVAvatarLocal);
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pMVar1 = MVGroup::MVGroup_Clone
                     ((MVGroup *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,worldObjects,
                      prototypes,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    lhs = mscorlib.dll::System::Object::Object_GetType((Object *)pMVar1,(MethodInfo *)0x0);
    handle = TypeRef__MVAvatarLocal;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    rhs = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                    ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals((Int32Enum__Enum)lhs,(Int32Enum__Enum)rhs,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pMStack3 = TypeInfo__MVAvatarLocal;
      if (((pMVar1->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment) ||
         ((MVAvatarLocal__Class *)
          (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarLocal)) goto code_?;
      pMVar1[1].fields.previewLayerMask = (this->fields).spawnRoleCreatorId;
    }
    return pMVar1;
  }
  func_?();
  pMStack3 = extraout_EDX;
code_?:
  pMStack4 = pMVar1;
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar5)();
  return pMVar1;
}


/* MVPreviewAvatar(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPreviewAvatar::MVPreviewAvatar__ctor
               (MVPreviewAvatar *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVGroup::MVGroup__ctor
              ((MVGroup *)this,data,(pPVar1->fields).mvPreviewAvatarPrefab,worldObjects,
               (MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_SpawnRoleCreatorId(Int32) */

void Assembly-CSharp.dll::MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId
               (MVPreviewAvatar *this,int32_t value,MethodInfo *method)

{
  (this->fields).spawnRoleCreatorId = value;
  return;
}

