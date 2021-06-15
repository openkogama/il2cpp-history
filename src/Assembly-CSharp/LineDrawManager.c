
/* Void DrawEnqueuedLines() */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_DrawEnqueuedLines
               (LineDrawManager *this,MethodInfo *method)

{
  auVar1._8_4_ = 0;
  auVar1._0_8_ = CONCAT44(unaff_EBP,unaff_ESI);
  auVar2 = auVar1 << 0x20;
  if (cRam_? == '\0') {
    auVar2._4_8_ = CONCAT44(unaff_EBP,unaff_ESI);
    auVar2._0_4_ = _UNK_?;
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar3 = auVar2._4_8_;
  pQVar4 = (this->fields).linkLines;
  while (pQVar4 != (Queue_1_LineDrawManager_LinkLine_ *)0x0) {
    uVar3 = auVar2._4_8_;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__get_Count__
                       );
    if ((int)pIVar5 < 1) {
      return;
    }
    pQVar4 = (this->fields).linkLines;
    if (pQVar4 == (Queue_1_LineDrawManager_LinkLine_ *)0x0) break;
    uVar3 = CONCAT44(MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Dequeue__
                     ,pQVar4);
    pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
             Queue_1_SmoothPhysicsMovement_Package__Dequeue
                       ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Dequeue__
                       );
    if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
    pfVar7 = &(pSVar6->fields).rotation.w;
    auVar2 = *(undefined1 (*) [12])pfVar7;
    to.x = (pSVar6->fields).rotation.x;
    to.y = (pSVar6->fields).rotation.y;
    to.z = (pSVar6->fields).rotation.z;
    LineDrawManager_DrawLine(this,(pSVar6->fields).position,to,*(Color *)pfVar7,(MethodInfo *)0x0);
    uVar3 = auVar2._4_8_;
    pQVar4 = (this->fields).linkLines;
  }
  func_?(0,uVar3);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DrawLine(Vector3, Vector3, Color) */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_DrawLine
               (LineDrawManager *this,Vector3 from,Vector3 to,Color color,MethodInfo *method)

{
  pOVar1 = (Object_1__Class *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar2 == MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    method_00 = (MethodInfo *)0x0;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pMVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar3 == (MainCameraManager *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = (Camera *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar3,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        pOVar1 = TypeInfo__UnityEngine__Object;
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (this_01 == (Camera *)0x0) goto code_?;
        uVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (this_01,method_00);
        iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        if ((uVar6 & 1 << ((byte)iVar7 & 0x1f)) != 0) {
          this_00 = (this->fields).lineMaterial;
          if (this_00 == (Material *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                    (this_00,0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Color(color,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    (from.z,from.z,from.z,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3(to.x,to.y,to.z,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
          pOVar1 = (Object_1__Class *)color.g;
        }
      }
    }
  }
  *unaff_FS_OFFSET = pOVar1;
  return;
}


/* Void DrawLineDirect(Vector3, Vector3, Color) */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_DrawLineDirect
               (LineDrawManager *this,Vector3 from,Vector3 to,Color color,MethodInfo *method)

{
  this_00 = (this->fields).lineMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(this_00,0,(MethodInfo *)0x0)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Color(color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3(color.a,0.0,from.z,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3(color.a,0.0,from.z,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DrawLine(LineDrawManager+LinkLine) */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_DrawLine_1
               (LineDrawManager *this,LineDrawManager_LinkLine *linkLine,MethodInfo *method)

{
  if (linkLine != (LineDrawManager_LinkLine *)0x0) {
    LineDrawManager_DrawLine
              (this,(linkLine->fields).startPos,(linkLine->fields).endPos,(linkLine->fields).color,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_OnPostRender
               (LineDrawManager *this,MethodInfo *method)

{
  this_00 = this;
  pMVar1 = in_stack_2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pMVar1 = in_stack_2;
  }
  uVar3 = 0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pQVar4 = (this->fields).linkLines;
  if (pQVar4 != (Queue_1_LineDrawManager_LinkLine_ *)0x0) {
    while (pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                                MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__get_Count__
                               ), 0 < (int)pIVar5) {
      pQVar4 = (this->fields).linkLines;
      if ((pQVar4 == (Queue_1_LineDrawManager_LinkLine_ *)0x0) ||
         (pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]
                    ::Queue_1_SmoothPhysicsMovement_Package__Dequeue
                              ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar4,
                               MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Dequeue__
                              ), pSVar6 == (SmoothPhysicsMovement_Package *)0x0))
      goto code_?;
      pQVar7 = &(pSVar6->fields).rotation;
      pMVar1 = (MethodInfo *)pQVar7->x;
      to_01.x = pQVar7->x;
      to_01.y = pQVar7->y;
      to_01.z = pQVar7->z;
      LineDrawManager_DrawLine
                (this,(pSVar6->fields).position,to_01,*(Color *)&(pSVar6->fields).rotation.w,
                 (MethodInfo *)0x0);
      pQVar4 = (this->fields).linkLines;
      if (pQVar4 == (Queue_1_LineDrawManager_LinkLine_ *)0x0) goto code_?;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      this_02 = (Camera *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                           (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        if ((this->fields).tempLink != (Link_1 *)0x0) {
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                    (&VStack_9,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                    (&VStack_9,(MethodInfo *)0x0);
          func_?(&stack0xffffffb0,0,0,0x3f800000,0x3f800000,0);
          pLVar10 = (this->fields).tempLink;
          if (pLVar10 == (Link_1 *)0x0) goto code_?;
          if ((pLVar10->fields).outputWOID < 1) {
            if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVInputWrapper);
            }
            pVVar11 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition(&VStack_9,(StandaloneInput *)0x0,pMVar1);
            uVar12 = pVVar11->x;
            uVar13 = pVVar11->y;
            VStack_14.z = pVVar11->z;
            VStack_14.x = (float)uVar12;
            VStack_14.y = (float)uVar13;
            pVVar11 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition(&VStack_9,(StandaloneInput *)0x0,pMVar1);
            uStack_15._0_4_ = pVVar11->x;
            uStack_15._4_4_ = pVVar11->y;
            fStack_16 = pVVar11->z;
            if (this_02 == (Camera *)0x0) goto code_?;
            fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                               (this_02,(MethodInfo *)0x0);
            VStack_18.z = 0.0;
            VStack_18.x = 0.0;
            VStack_18.y = 0.0;
            pMVar1 = (MethodInfo *)&UNK_?;
            func_?(&VStack_18,VStack_14.x,uStack_15._4_4_,fVar17,0);
            position_00.y = VStack_18.y;
            position_00.x = VStack_18.x;
            position_00.z = VStack_18.z;
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                                (&VStack_9,this_02,position_00,(MethodInfo *)0x0);
            uVar19 = pVVar11->x;
            uVar20 = pVVar11->y;
            this = (LineDrawManager *)pVVar11->z;
            VStack_14.y = (float)uVar19;
            VStack_14.z = (float)uVar20;
          }
          else {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar21 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pLVar10 = (this->fields).tempLink;
            if (((pLVar10 == (Link_1 *)0x0) || (pMVar21 == (MVWorldObjectClientManager *)0x0)) ||
               (pMVar22 = (MVWorldObjectClient *)
                          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar21,(pLVar10->fields).outputWOID,(MethodInfo *)0x0),
               pMVar22 == (MVWorldObjectClient *)0x0)) goto code_?;
            pVVar11 = MVWorldObjectClient::MVWorldObjectClient_GetOutputConnectorPos
                                (&VStack_9,pMVar22,(MethodInfo *)0x0);
            uVar23 = pVVar11->x;
            uVar24 = pVVar11->y;
            this = (LineDrawManager *)pVVar11->z;
            pMVar1 = (MethodInfo *)&UNK_?;
            VStack_14.y = (float)uVar23;
            VStack_14.z = (float)uVar24;
            func_?(&stack0xffffffb0,0,0,0x3f800000,0x3f800000,0);
          }
          pLVar10 = (this_00->fields).tempLink;
          if (pLVar10 == (Link_1 *)0x0) goto code_?;
          if ((pLVar10->fields).inputWOID < 1) {
            if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVInputWrapper);
            }
            pVVar11 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition(&VStack_25,(StandaloneInput *)0x0,pMVar1);
            VStack_9.x = pVVar11->x;
            VStack_9.y = pVVar11->y;
            VStack_9.z = pVVar11->z;
            pVVar11 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition(&VStack_18,(StandaloneInput *)0x0,pMVar1);
            VStack_25.x = pVVar11->x;
            VStack_25.y = pVVar11->y;
            if (this_02 == (Camera *)0x0) goto code_?;
            VStack_18.z = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                                    (this_02,(MethodInfo *)0x0);
            fStack_16 = 0.0;
            uStack_15 = 0;
            pMVar1 = (MethodInfo *)&UNK_?;
            func_?(&uStack_15,VStack_9.x,VStack_25.y,VStack_18.z,0);
            position.z = fStack_16;
            position.x = (float)(undefined4)uStack_15;
            position.y = (float)uStack_15._4_4_;
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                                (&VStack_9,this_02,position,(MethodInfo *)0x0);
            uVar26._0_4_ = pVVar11->x;
            uVar26._4_4_ = pVVar11->y;
            fVar17 = pVVar11->z;
          }
          else {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar21 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pLVar10 = (this_00->fields).tempLink;
            if (((pLVar10 == (Link_1 *)0x0) || (pMVar21 == (MVWorldObjectClientManager *)0x0)) ||
               (pMVar22 = (MVWorldObjectClient *)
                          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar21,(pLVar10->fields).inputWOID,(MethodInfo *)0x0),
               pMVar22 == (MVWorldObjectClient *)0x0)) goto code_?;
            pVVar11 = MVWorldObjectClient::MVWorldObjectClient_GetInputConnectorPos
                                (&VStack_9,pMVar22,(MethodInfo *)0x0);
            uVar27 = pVVar11->x;
            uVar28 = pVVar11->y;
            fVar17 = pVVar11->z;
            pMVar1 = (MethodInfo *)&UNK_?;
            VStack_18.y = (float)uVar27;
            VStack_18.z = (float)uVar28;
            func_?(&stack0xffffffb0,0x3f800000,0,0,0x3f800000,0);
            uVar26 = CONCAT44(VStack_18.z,VStack_18.y);
          }
          from.y = VStack_14.z;
          from.x = VStack_14.y;
          from.z = (float)this;
          to.z = fVar17;
          to.x = (float)(int)uVar26;
          to.y = (float)(int)((ulonglong)uVar26 >> 0x20);
          LineDrawManager_DrawLine(this_00,from,to,(Color)ZEXT416(uVar3),(MethodInfo *)0x0);
        }
        if ((this_00->fields).tempObjectLink != (ObjectLink *)0x0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar21 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pOVar29 = (this_00->fields).tempObjectLink;
          if (((pOVar29 != (ObjectLink *)0x0) && (pMVar21 != (MVWorldObjectClientManager *)0x0)) &&
             (pMVar22 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar21,(pOVar29->fields).objectConnectorWOID,(MethodInfo *)0x0),
             pMVar22 != (MVWorldObjectClient *)0x0)) {
            pVVar11 = MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                                (&VStack_9,pMVar22,(MethodInfo *)0x0);
            uVar30 = pVVar11->x;
            uVar31 = pVVar11->y;
            fVar17 = pVVar11->z;
            VStack_18.y = (float)uVar30;
            VStack_18.z = (float)uVar31;
            if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVInputWrapper);
            }
            pVVar11 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition(&VStack_9,(StandaloneInput *)0x0,pMVar1);
            VStack_25.x = pVVar11->x;
            VStack_25.y = pVVar11->y;
            pVVar11 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition(&VStack_14,(StandaloneInput *)0x0,pMVar1);
            VStack_9.x = pVVar11->x;
            VStack_9.y = pVVar11->y;
            VStack_9.z = pVVar11->z;
            if (this_02 != (Camera *)0x0) {
              fVar32 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                                 (this_02,(MethodInfo *)0x0);
              fStack_16 = 0.0;
              uStack_15 = 0;
              func_?(&uStack_15,VStack_25.x,VStack_9.y,fVar32,0);
              position_01.z = fStack_16;
              position_01.x = (float)(undefined4)uStack_15;
              position_01.y = (float)uStack_15._4_4_;
              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                                  (&VStack_9,this_02,position_01,(MethodInfo *)0x0);
              uVar33 = pVVar11->x;
              uVar34 = pVVar11->y;
              fVar32 = pVVar11->z;
              fVar35 = 1.0;
              uVar36 = 0;
              uVar37 = 0x3f800000;
              uVar38 = 0x3f800000;
              VStack_14.y = (float)uVar33;
              VStack_14.z = (float)uVar34;
              func_?(&stack0xffffffa0);
              from_00.y = VStack_18.z;
              from_00.x = VStack_18.y;
              from_00.z = fVar17;
              to_00.y = VStack_14.z;
              to_00.x = VStack_14.y;
              to_00.z = fVar32;
              color.g = (float)uVar37;
              color.r = (float)uVar38;
              color.b = (float)uVar36;
              color.a = fVar35;
              LineDrawManager_DrawLine(this_00,from_00,to_00,color,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}


/* Void SetTempLink(Link) */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_SetTempLink
               (LineDrawManager *this,Link_1 *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).tempLinkObject;
  (this->fields).tempLink = link;
  if (link == (Link_1 *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pLVar1 = (this->fields).tempLinkObject;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pLVar1,(MethodInfo *)0x0);
      (this->fields).tempLinkObject = (LinkObjectScript *)0x0;
    }
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pLVar1 = (this->fields).tempLinkObject;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pLVar1,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pLVar1 = PrefabPool::PrefabPool_get_LinkObject(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pLVar1 = (LinkObjectScript *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pLVar1,
                        LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                       );
    (this->fields).tempLinkObject = pLVar1;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* LineDrawManager() */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager__ctor
               (LineDrawManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_LineDrawManager_LinkLine_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>
                           );
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Queue__);
  (this->fields).linkLines = this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

