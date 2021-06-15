
/* Bounds GetLocalBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_GetLocalBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessoryParticles *this,MethodInfo *method
                   )

{
  pfVar1 = (float *)(*(code *)(this->klass->vtable).GetWorldBounds.method)
                              (auStack_2,this,(this->klass->vtable).GetLocalBounds.methodPtr);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  (__return_storage_ptr__->m_Center).x = *pfVar1;
  (__return_storage_ptr__->m_Center).y = fVar3;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar5;
  fVar3 = pfVar1[5];
  (__return_storage_ptr__->m_Extents).y = pfVar1[4];
  (__return_storage_ptr__->m_Extents).z = fVar3;
  return __return_storage_ptr__;
}


/* Bounds GetWorldBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_GetWorldBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessoryParticles *this,MethodInfo *method
                   )

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  uStack_5 = 0;
  uStack_6 = 0;
  func_?(&uStack_6,0x40000000,0x40000000,0x40000000,0);
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  func_?(__return_storage_ptr__,uStack_3,fVar4,uStack_6,uStack_5,0);
  return __return_storage_ptr__;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_Update
               (AvatarAccessoryParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pAVar1 = AvatarAccessoryParticles_get_AccessoryParticlesSettings(this,(MethodInfo *)0x0);
  if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
    if ((pAVar1->fields).useEmissionMovement == 0) {
      return;
    }
    puVar2 = (undefined *)(this->fields).prevPosition.y;
    fVar3 = (this->fields).prevPosition.z;
    pTVar4 = AvatarAccessory::AvatarAccessory_get_Transform
                       ((AvatarAccessory *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
      uVar6._0_4_ = pVVar5->x;
      uVar6._4_4_ = pVVar5->y;
      fVar7 = pVVar5->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        uVar6 = CONCAT44(uVar6._4_4_,TypeInfo__UnityEngine__Vector3);
        puVar2 = &UNK_?;
        func_?();
      }
      lhs.y = (float)puVar2;
      lhs.x = (float)(int)((ulonglong)uVar6 >> 0x20);
      lhs.z = fVar3;
      rhs.z = fVar7;
      rhs.x = (float)(int)uVar6;
      rhs.y = (float)(int)((ulonglong)uVar6 >> 0x20);
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                        (lhs,rhs,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)AvatarAccessoryParticles_get_RootParticleSystem(this,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        if (this_00 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                    (this_00,(MethodInfo *)0x0);
          pAVar1 = AvatarAccessoryParticles_get_AccessoryParticlesSettings(this,(MethodInfo *)0x0);
          if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
            func_?();
            return;
          }
        }
      }
      else if (this_00 !=
               (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                  (this_00,(MethodInfo *)0x0);
        pAVar1 = AvatarAccessoryParticles_get_AccessoryParticlesSettings(this,(MethodInfo *)0x0);
        if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
          func_?();
          pTVar4 = AvatarAccessory::AvatarAccessory_get_Transform
                             ((AvatarAccessory *)this,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
            fVar7 = pVVar5->y;
            fVar3 = pVVar5->z;
            (this->fields).prevPosition.x = pVVar5->x;
            (this->fields).prevPosition.y = fVar7;
            (this->fields).prevPosition.z = fVar3;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* AvatarAccessoryParticles() */

void Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles__ctor
               (AvatarAccessoryParticles *this,MethodInfo *method)

{
  (this->fields)._._visible = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* AccessoryParticlesSettings get_AccessoryParticlesSettings() */

AccessoryParticlesSettings *
Assembly-CSharp.dll::AvatarAccessoryParticles::
AvatarAccessoryParticles_get_AccessoryParticlesSettings
          (AvatarAccessoryParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryParticlesSettings;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (AccessoryParticlesSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        AccessoryParticlesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryParticlesSettings>__
                       );
    (this->fields).accessoryParticlesSettings = pAVar1;
  }
  return (this->fields).accessoryParticlesSettings;
}


/* AccessorySettings get_AccessorySettings() */

AccessorySettings *
Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_get_AccessorySettings
          (AvatarAccessoryParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryParticlesSettings;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (AccessoryParticlesSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        AccessoryParticlesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryParticlesSettings>__
                       );
    (this->fields).accessoryParticlesSettings = pAVar1;
  }
  return (AccessorySettings *)(this->fields).accessoryParticlesSettings;
}


/* ParticleSystem get_RootParticleSystem() */

ParticleSystem *
Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_get_RootParticleSystem
          (AvatarAccessoryParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).rootParticleSystem;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
             Component_1_GetComponentInChildren_12
                       ((Component_1 *)this,
                        UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::ParticleSystem>__
                       );
    (this->fields).rootParticleSystem = (ParticleSystem *)pTVar2;
  }
  return (this->fields).rootParticleSystem;
}

