
/* Void DrawEnqueuedLines() */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_DrawEnqueuedLines
               (LineDrawManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).linkLines;
  while (pQVar1 != (Queue_1_LineDrawManager_LinkLine_ *)0x0) {
    if ((pQVar1->fields)._size < 1) {
      return;
    }
    pQVar1 = (this->fields).linkLines;
    if ((pQVar1 == (Queue_1_LineDrawManager_LinkLine_ *)0x0) ||
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__Dequeue
                           ((Queue_1_System_Object_ *)pQVar1,
                            MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Dequeue__
                           ), pOVar2 == (Object *)0x0)) break;
    LineDrawManager_DrawLine
              (this,*(Vector3 *)(pOVar2 + 1),*(Vector3 *)&pOVar2[2].monitor,*(Color *)(pOVar2 + 4),
               (MethodInfo *)0x0);
    pQVar1 = (this->fields).linkLines;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DrawLine(Vector3, Vector3, Color) */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_DrawLine
               (LineDrawManager *this,Vector3 from,Vector3 to,Color color,MethodInfo *method)

{
  pCVar1 = (Camera *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar2 == MVGameMode__Enum_Edit) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pMVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar3 == (MainCameraManager *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = (pMVar3->fields).mainCamera;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (this_01 == (Camera *)0x0) goto code_?;
        uVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (this_01,(MethodInfo *)0x0);
        iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        pCVar1 = this_01;
        if ((uVar6 & 1 << ((byte)iVar7 & 0x1f)) != 0) {
          this_00 = (this->fields).lineMaterial;
          if (this_00 == (Material *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                    (this_00,0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Color(color,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    (color.r,color.g,color.b,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    (color.a,0.0,4.263927e-29,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
          pCVar1 = this_01;
        }
      }
    }
  }
  *unaff_FS_OFFSET = pCVar1;
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_OnPostRender
               (LineDrawManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).linkLines;
  if (pQVar1 != (Queue_1_LineDrawManager_LinkLine_ *)0x0) {
    while (0 < (pQVar1->fields)._size) {
      pQVar1 = (this->fields).linkLines;
      if ((pQVar1 == (Queue_1_LineDrawManager_LinkLine_ *)0x0) ||
         (pOVar2 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                   Queue_1_System_Object__Dequeue
                             ((Queue_1_System_Object_ *)pQVar1,
                              MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Dequeue__
                             ), pOVar2 == (Object *)0x0)) goto code_?;
      in_stack_3 = (MethodInfo *)&UNK_?;
      LineDrawManager_DrawLine
                (this,*(Vector3 *)(pOVar2 + 1),*(Vector3 *)&pOVar2[2].monitor,*(Color *)(pOVar2 + 4)
                 ,(MethodInfo *)0x0);
      pQVar1 = (this->fields).linkLines;
      if (pQVar1 == (Queue_1_LineDrawManager_LinkLine_ *)0x0) goto code_?;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar4 != (MainCameraManager *)0x0) {
      this_00 = (pMVar4->fields).mainCamera;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        if ((this->fields).tempLink != (Link *)0x0) {
          pLStack_6 = (this->fields).tempLinkObject;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pLStack_6,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            this_01 = (this->fields).tempLinkObject;
            if (this_01 == (LinkObjectScript *)0x0) goto code_?;
            LinkObjectScript::LinkObjectScript_UpdateLinkVisual
                      (this_01,(this->fields).tempLink,(MethodInfo *)0x0);
          }
        }
        if ((this->fields).tempObjectLink != (ObjectLink *)0x0) {
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVInputWrapper);
          }
          pVVar7 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                   DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                             (&VStack_8,(DefaultEventSystem_Input *)0x0,in_stack_3);
          fVar9 = pVVar7->x;
          pVVar7 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                   DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                             (&VStack_8,(DefaultEventSystem_Input *)0x0,in_stack_3);
          pLStack_6 = (LinkObjectScript *)pVVar7->y;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pOVar10 = (this->fields).tempObjectLink;
          if (((pOVar10 != (ObjectLink *)0x0) && (this_02 != (MVWorldObjectClientManager *)0x0)) &&
             (this_03 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (this_02,(pOVar10->fields).objectConnectorWOID,(MethodInfo *)0x0),
             this_03 != (MVWorldObjectClient *)0x0)) {
            pVVar7 = MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                               (&VStack_8,this_03,(MethodInfo *)0x0);
            uStack_11._0_4_ = pVVar7->x;
            uStack_11._4_4_ = pVVar7->y;
            fStack_12 = pVVar7->z;
            if (this_00 != (Camera *)0x0) {
              VStack_8.z = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_get_nearClipPlane(this_00,(MethodInfo *)0x0);
              position.y = (float)pLStack_6;
              position.x = fVar9;
              position.z = VStack_8.z;
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                                 (&VStack_8,this_00,position,(MethodInfo *)0x0);
              from.z = fStack_12;
              from.x = (float)(undefined4)uStack_11;
              from.y = (float)uStack_11._4_4_;
              color.g = (float)_UNK_?;
              color.r = (float)_UNK_?;
              color.b = (float)_UNK_?;
              color.a = _UNK_?;
              LineDrawManager_DrawLine(this,from,*pVVar7,color,(MethodInfo *)0x0);
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
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetTempLink(Link) */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_SetTempLink
               (LineDrawManager *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).tempLink = link;
  func_?(&(this->fields).tempLink,link);
  pLVar1 = (this->fields).tempLinkObject;
  if (link == (Link *)0x0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pLVar1 = (this->fields).tempLinkObject;
      if (pLVar1 == (LinkObjectScript *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pLVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar3,(MethodInfo *)0x0);
      (this->fields).tempLinkObject = (LinkObjectScript *)0x0;
      func_?(&(this->fields).tempLinkObject);
    }
    return;
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pLVar1 = (this->fields).tempLinkObject;
    if (pLVar1 == (LinkObjectScript *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pLVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar4 != (PrefabPool *)0x0) {
    pLVar1 = (pPVar4->fields).linkObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pLVar1 = (LinkObjectScript *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pLVar1,
                        LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                       );
    (this->fields).tempLinkObject = pLVar1;
    func_?();
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* LineDrawManager() */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager__ctor
               (LineDrawManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_LineDrawManager_LinkLine_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>
                           );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Queue__);
  (this->fields).linkLines = this_00;
  func_?(&(this->fields).linkLines,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

