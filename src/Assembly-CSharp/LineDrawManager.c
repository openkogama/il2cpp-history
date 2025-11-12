
/* Void DrawEnqueuedLines() */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_DrawEnqueuedLines
               (LineDrawManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__get_Count__
                 );
    LOCK();
    UNLOCK();
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
    VStack_3.z = *(float *)((longlong)&pOVar2[2].klass + 4);
    pMStack_4 = pOVar2[2].monitor;
    pOStack_5 = pOVar2[3].klass;
    VStack_3._0_8_ = *(undefined8 *)((longlong)&pOVar2[1].monitor + 4);
    fStack_6 = *(float *)&pOVar2[1].monitor;
    pOStack_7 = pOVar2[1].klass;
    LineDrawManager_DrawLine
              (this,(Vector3 *)&pOStack_7,&VStack_3,(Color *)&pMStack_4,(MethodInfo *)0x0);
    pQVar1 = (this->fields).linkLines;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DrawLine(Vector3, Vector3, Color) */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_DrawLine
               (LineDrawManager *this,Vector3 *from,Vector3 *to,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
    FUN_?();
code_?:
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
code_?:
    FUN_?();
  }
  else {
    if ((pGVar1->fields).gameMode != 0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pMVar3 == (MainCameraManager *)0x0) {
      bVar4 = false;
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar4 = (pMVar3->fields)._._._._.m_CachedPtr != (void *)0x0;
    }
    bVar5 = false;
    if (!bVar4) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar3 == (MainCameraManager *)0x0) goto code_?;
    this_00 = (pMVar3->fields).mainCamera;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this_00 != (Camera *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar5 = (this_00->fields)._._._.m_CachedPtr != (void *)0x0;
    }
    if (!bVar5) {
      return;
    }
    if (this_00 != (Camera *)0x0) {
      uVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                        (this_00,(MethodInfo *)0x0);
      uVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      if ((uVar6 >> (uVar7 & 0x1f) & 1) == 0) {
        return;
      }
      this_01 = (this->fields).lineMaterial;
      if (this_01 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                  (this_01,0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
        fVar8 = color->r;
        fVar9 = color->g;
        fVar10 = color->b;
        fVar11 = color->a;
        pcVar12 = pcRam_?;
        if ((pcRam_? != (code *)0x0) ||
           (pcVar12 = (code *)FUN_?(), pcVar12 != (code *)0x0)) {
          pcRam_? = pcVar12;
          (*pcRam_?)(fVar8,fVar9,fVar10,fVar11);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    (from->x,from->y,from->z,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                    (to->x,to->y,to->z,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void DrawLineDirect(Vector3, Vector3, Color) */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_DrawLineDirect
               (LineDrawManager *this,Vector3 *from,Vector3 *to,Color *color,MethodInfo *method)

{
  this_00 = (this->fields).lineMaterial;
  if (this_00 == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(this_00,0,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(1);
  fVar3 = color->r;
  fVar4 = color->g;
  fVar5 = color->b;
  fVar6 = color->a;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(fVar3,fVar4,fVar5,fVar6);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3(from->x,from->y,from->z,(MethodInfo *)0x0)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3(to->x,to->y,to->z,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* Void DrawLine(LineDrawManager+LinkLine) */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_DrawLine_1
               (LineDrawManager *this,LineDrawManager_LinkLine *linkLine,MethodInfo *method)

{
  if (linkLine != (LineDrawManager_LinkLine *)0x0) {
    CStack_1.r = (linkLine->fields).color.r;
    CStack_1.g = (linkLine->fields).color.g;
    CStack_1.b = (linkLine->fields).color.b;
    CStack_1.a = (linkLine->fields).color.a;
    VStack_2.z = (linkLine->fields).endPos.z;
    VStack_2.x = (linkLine->fields).endPos.x;
    VStack_2.y = (linkLine->fields).endPos.y;
    VStack_3.x = (linkLine->fields).startPos.x;
    VStack_3.y = (linkLine->fields).startPos.y;
    VStack_3.z = (linkLine->fields).startPos.z;
    LineDrawManager_DrawLine(this,&VStack_3,&VStack_2,&CStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_OnPostRender
               (LineDrawManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
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
                             ), pOVar2 == (Object *)0x0)) goto DAT_?;
      auStack_3._0_8_ = pOVar2[2].monitor;
      auStack_3._8_8_ = pOVar2[3].klass;
      VStack_4.z = *(float *)((longlong)&pOVar2[2].klass + 4);
      VStack_4._0_8_ = *(undefined8 *)((longlong)&pOVar2[1].monitor + 4);
      VStack_5._0_8_ = pOVar2[1].klass;
      VStack_5.z = *(float *)&pOVar2[1].monitor;
      LineDrawManager_DrawLine(this,&VStack_5,&VStack_4,(Color *)auStack_3,(MethodInfo *)0x0);
      pQVar1 = (this->fields).linkLines;
      if (pQVar1 == (Queue_1_LineDrawManager_LinkLine_ *)0x0) goto DAT_?;
    }
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar6 != (MainCameraManager *)0x0) {
      this_00 = (pMVar6->fields).mainCamera;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 != (Camera *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._._._.m_CachedPtr != (void *)0x0) {
          if ((this->fields).tempLink != (Link *)0x0) {
            pLVar7 = (this->fields).tempLinkObject;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pLVar7 != (LinkObjectScript *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pLVar7->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                pLVar7 = (this->fields).tempLinkObject;
                if (pLVar7 == (LinkObjectScript *)0x0) goto DAT_?;
                LinkObjectScript::LinkObjectScript_UpdateLinkVisual
                          (pLVar7,(this->fields).tempLink,(MethodInfo *)0x0);
              }
            }
          }
          if ((this->fields).tempObjectLink != (ObjectLink *)0x0) {
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            VStack_4.x = 0.0;
            VStack_4.y = 0.0;
            VStack_4.z = 0.0;
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(&VStack_4);
            VStack_5._0_8_ = (Object__Class *)0x0;
            VStack_5.z = 0.0;
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)();
            this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pOVar10 = (this->fields).tempObjectLink;
            if (((pOVar10 == (ObjectLink *)0x0) || (this_01 == (MVWorldObjectClientManager *)0x0)) ||
               (this_02 = MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClient
                                    (this_01,(pOVar10->fields).objectConnectorWOID,(MethodInfo *)0x0)
               , this_02 == (MVWorldObjectClient *)0x0)) goto DAT_?;
            pVVar11 = MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                                ((Vector3 *)auStack_3,this_02,(MethodInfo *)0x0);
            fVar12 = VStack_5.y;
            uVar9._0_4_ = pVVar11->x;
            uVar9._4_4_ = pVVar11->y;
            fVar13 = pVVar11->z;
            VStack_4.z = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                                    (this_00,(MethodInfo *)0x0);
            VStack_4.y = fVar12;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_5.x = 0.0;
            VStack_5.y = 0.0;
            VStack_5.z = 0.0;
            pvVar14 = (this_00->fields)._._._.m_CachedPtr;
            if (pvVar14 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar14,&VStack_4,2,&VStack_5);
            auStack_3._0_4_ = _UNK_?;
            auStack_3._4_4_ = _UNK_?;
            auStack_3._8_4_ = _UNK_?;
            auStack_3._12_4_ = _UNK_?;
            VStack_4.x = VStack_5.x;
            VStack_4.y = VStack_5.y;
            VStack_4.z = VStack_5.z;
            VStack_5._0_8_ = uVar9;
            VStack_5.z = fVar13;
            LineDrawManager_DrawLine
                      (this,&VStack_5,&VStack_4,(Color *)auStack_3,(MethodInfo *)0x0);
          }
        }
      }
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetTempLink(Link) */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager_SetTempLink
               (LineDrawManager *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).tempLink = link;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).tempLink >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (this->fields).tempLinkObject;
  if (link == (Link *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pLVar6 != (LinkObjectScript *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pLVar6->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        pLVar6 = (this->fields).tempLinkObject;
        if (pLVar6 == (LinkObjectScript *)0x0) goto code_?;
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pLVar6,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)pGVar7,0.0,(MethodInfo *)0x0);
        bVar1 = iRam_? != 0;
        (this->fields).tempLinkObject = (LinkObjectScript *)0x0;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).tempLinkObject >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
      }
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pLVar6 != (LinkObjectScript *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pLVar6->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        pLVar6 = (this->fields).tempLinkObject;
        if (pLVar6 == (LinkObjectScript *)0x0) goto code_?;
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pLVar6,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)pGVar7,0.0,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar8 == (PrefabPool *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pLVar6 = (pPVar8->fields).linkObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar6 = (LinkObjectScript *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pLVar6,
                        LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                       );
    bVar1 = iRam_? != 0;
    (this->fields).tempLinkObject = pLVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).tempLinkObject >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  return;
}


/* LineDrawManager() */

void Assembly-CSharp.dll::LineDrawManager::LineDrawManager__ctor
               (LineDrawManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_LineDrawManager_LinkLine_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<LineDrawManager::LinkLine>__Queue__);
  bVar1 = iRam_? != 0;
  (this->fields).linkLines = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).linkLines >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

