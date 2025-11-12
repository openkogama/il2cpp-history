
/* Void ResetPosition(Vector3) */

void Assembly-CSharp.dll::AvatarEditModeCamera::AvatarEditModeCamera_ResetPosition
               (AvatarEditModeCamera *this,Vector3 *lookAtPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSpawnPointBlue);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarEditModeCamera____c___ResetPosition_b__2_0_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeCamera____c);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarEditModeCamera____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarEditModeCamera____c);
  }
  this_01 = TypeInfo__AvatarEditModeCamera____c->static_fields->__9__2_0;
  if (this_01 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarEditModeCamera____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarEditModeCamera____c);
    }
    object = TypeInfo__AvatarEditModeCamera____c->static_fields->__9;
    this_01 = (Func_2_MVWorldObjectClient_Boolean_ *)
              FUN_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__AvatarEditModeCamera____c___ResetPosition_b__2_0_MVWorldObjectClient_,
               (MethodInfo *)0x0);
    TypeInfo__AvatarEditModeCamera____c->static_fields->__9__2_0 = this_01;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__AvatarEditModeCamera____c->static_fields->__9__2_0 >>
                     0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                        (this_00,this_01,(MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClient *)0x0) {
      bVar6 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
      if (((this_02->klass->_1).naturalAligment < bVar6) ||
         ((MVSpawnPointBlue__Class *)(this_02->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
          TypeInfo__MVSpawnPointBlue)) {
        FUN_?(this_02);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Convert_this_to_build_mode_avata,(MethodInfo *)0x0);
    pMVar8 = (this->fields)._.avatarLocal;
    if (this_02 != (MVWorldObjectClient *)0x0) {
      puVar9 = (undefined8 *)
               (*(this_02->klass->vtable).get_WorldPosition_1.methodPtr)
                         (&QStack_10,this_02,(this_02->klass->vtable).get_WorldPosition_1.method);
      VStack_11._0_8_ = *puVar9;
      fVar12 = *(float *)(puVar9 + 1);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      QStack_10.x = (pVVar13->upVector).x;
      QStack_10.y = (pVVar13->upVector).y;
      if (pMVar8 != (MVBuildModeAvatarLocal *)0x0) {
        VStack_11.y = VStack_11.y + QStack_10.y;
        VStack_11.x = VStack_11.x + QStack_10.x;
        VStack_11.z = fVar12 + (pVVar13->upVector).z;
        (*(pMVar8->klass->vtable).set_WorldPosition.methodPtr)(pMVar8,&VStack_11);
        pMVar8 = (this->fields)._.avatarLocal;
        pQVar14 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                           (&QStack_10,this_02,(MethodInfo *)0x0);
        if (pMVar8 != (MVBuildModeAvatarLocal *)0x0) {
          QStack_10.x = pQVar14->x;
          QStack_10.y = pQVar14->y;
          QStack_10.z = pQVar14->z;
          QStack_10.w = pQVar14->w;
          MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                    ((MVWorldObjectClient *)pMVar8,&QStack_10,(MethodInfo *)0x0);
          VStack_11.x = lookAtPosition->x;
          VStack_11.y = lookAtPosition->y;
          VStack_11.z = lookAtPosition->z;
          JetPackCamera::JetPackCamera_FocusOnPosition
                    ((JetPackCamera *)this,&VStack_11,TypeRef__System__Activator__T._0_4_,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

