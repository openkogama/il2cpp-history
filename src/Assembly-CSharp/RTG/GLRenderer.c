
/* Void DrawCircle2D(Vector2, Single, Int32, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawCircle2D
               (Vector2 circleCenter,float circleRadius,int32_t numPoints,Camera *camera,
               MethodInfo *method)

{
  this = PrimitiveFactory::PrimitiveFactory_Generate2DCircleBorderPointsCW
                   (circleCenter,circleRadius,numPoints,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (this != (List_1_UnityEngine_Vector2_ *)0x0) {
    iVar1 = (this->fields)._size + -1;
    if (0 < iVar1) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(4,(MethodInfo *)0x0);
      if (camera == (Camera *)0x0) goto code_?;
      position_00.z = 0.0;
      position_00._0_8_ = circleCenter;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                         ((Vector3 *)&stack0xffffffcc,camera,position_00,(MethodInfo *)0x0);
      uVar3 = pVVar2->x;
      pVVar2 = (Vector3 *)pVVar2->y;
      numPoints = 0;
      pCVar4 = (Camera *)0x0;
      puStack_5 = (undefined *)uVar3;
      do {
        v.y = (float)pVVar2;
        v.x = (float)puStack_5;
        v.z = (float)pCVar4;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        puVar6 = &UNK_?;
        pMVar7 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
        ;
        VVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this,numPoints,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        circleCenter.y = VVar8.y;
        pVVar2 = (Vector3 *)&stack0xffffffc0;
        position_01.y = circleCenter.y;
        position_01.x = circleCenter.x;
        position_01.z = (float)pMVar7;
        pCVar4 = camera;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           (pVVar2,camera,position_01,(MethodInfo *)0x0);
        fVar10 = pVVar9->z;
        circleCenter.x = (float)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar9,(MethodInfo *)0x0);
        numPoints = (int)fVar10 + 1;
        VVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this,numPoints,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        position.y = VVar8.y;
        position.x = circleCenter.y;
        position.z = (float)puVar6;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffffb4,camera,position,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar9,(MethodInfo *)0x0);
      } while (numPoints < iVar1);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DrawCircle3D(Vector2, Single, Vector3, Vector3, Int32) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawCircle3D
               (Vector2 circleCenter,float circleRadius,Vector3 circleRight,Vector3 circleUp,
               int32_t numPoints,MethodInfo *method)

{
  circleCenter_00.z = 0.0;
  circleCenter_00._0_8_ = circleCenter;
  this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
         PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints
                   (circleCenter_00,circleRadius,circleRight,circleUp,numPoints,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    iVar1 = (this->fields)._size + -1;
    if (0 < iVar1) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(4,(MethodInfo *)0x0);
      index = 0;
      do {
        v.z = 0.0;
        v._0_8_ = circleCenter;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&circleUp,this,index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        uVar3 = pVVar2->alias;
        uVar4 = pVVar2->path;
        circleUp.x = (float)&UNK_?;
        circleUp.y = (float)uVar3;
        circleUp.z = (float)uVar4;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex((Vector3)*pVVar2,(MethodInfo *)0x0);
        index = index + 1;
        circleUp.y = (float)&circleRight;
        circleUp.x = (float)&UNK_?;
        circleUp.z = (float)this;
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)circleUp.y,this,index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex((Vector3)*pVVar2,(MethodInfo *)0x0);
      } while (index < iVar1);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DrawCircleBorder2D(Vector2, Single, Int32, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawCircleBorder2D
               (Vector2 circleCenter,float circleRadius,int32_t numPoints,Camera *camera,
               MethodInfo *method)

{
  linePoints = PrimitiveFactory::PrimitiveFactory_Generate2DCircleBorderPointsCW
                         (circleCenter,circleRadius,numPoints,(MethodInfo *)0x0);
  GLRenderer_DrawLineLoop2D(linePoints,camera,(MethodInfo *)0x0);
  return;
}


/* Void DrawCircleBorder3D(Vector3, Single, Vector3, Vector3, Int32) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawCircleBorder3D
               (Vector3 circleCenter,float circleRadius,Vector3 circleRight,Vector3 circleUp,
               int32_t numPoints,MethodInfo *method)

{
  linePoints = PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints
                         (circleCenter,circleRadius,circleRight,circleUp,numPoints,(MethodInfo *)0x0
                         );
  GLRenderer_DrawLineLoop3D(linePoints,(MethodInfo *)0x0);
  return;
}


/* Void DrawLine2D(Vector2, Vector2, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLine2D
               (Vector2 startPoint,Vector2 endPoint,Camera *camera,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
  if (camera != (Camera *)0x0) {
    position_00.z = 0.0;
    position_00._0_8_ = startPoint;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                       ((Vector3 *)&stack0xfffffff0,camera,position_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->z;
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar1,(MethodInfo *)0x0);
    uStack3 = 0;
    position.y = 0.0;
    position.z = 0.0;
    position.x = fVar2;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                       ((Vector3 *)&stack0xfffffff0,camera,position,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DrawLine3D(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLine3D
               (Vector3 startPoint,Vector3 endPoint,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(startPoint,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(endPoint,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
  return;
}


/* Void DrawLineLoop2D(List`1[UnityEngine.Vector2], Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLineLoop2D
               (List_1_UnityEngine_Vector2_ *linePoints,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (linePoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    if (1 < (linePoints->fields)._size) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
      index = 0;
      while (index < (linePoints->fields)._size) {
        VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (linePoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        VStack_2.y = VVar1.y;
        index = index + 1;
        VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (linePoints,index % (linePoints->fields)._size,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        VStack_4.y = VVar3.y;
        if (camera == (Camera *)0x0) goto code_?;
        position.y = VStack_2.y;
        position.x = VStack_2.x;
        position.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff98,camera,position,(MethodInfo *)0x0);
        uVar6 = pVVar5->x;
        uVar7 = pVVar5->y;
        v.y = (float)uVar7;
        v.x = (float)uVar6;
        position_00.y = VStack_4.y;
        position_00.x = VStack_4.x;
        position_00.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff8c,camera,position_00,(MethodInfo *)0x0);
        uVar8._0_4_ = pVVar5->x;
        uStack_9 = pVVar5->y;
        v.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        v_00.z = 0.0;
        uStack_9 = (undefined4)(uVar8 >> 0x20);
        v_00.x = (float)(undefined4)uVar8;
        v_00.y = (float)uStack_9;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_00,(MethodInfo *)0x0);
        VStack_4 = VVar3;
        VStack_2 = VVar1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DrawLineLoop2D(List`1[UnityEngine.Vector2], Vector2, Vector2, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLineLoop2D_1
               (List_1_UnityEngine_Vector2_ *linePoints,Vector2 translation,Vector2 scale,
               Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (linePoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    if (1 < (linePoints->fields)._size) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
      index = 0;
      while (index < (linePoints->fields)._size) {
        VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (linePoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        VStack_2.y = VVar1.y;
        index = index + 1;
        VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (linePoints,index % (linePoints->fields)._size,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        VStack_4.y = VVar3.y;
        if (camera == (Camera *)0x0) goto code_?;
        position.y = translation.y + scale.y * VStack_2.y;
        position.x = translation.x + scale.x * VStack_2.x;
        position.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff98,camera,position,(MethodInfo *)0x0);
        uVar6 = pVVar5->x;
        uVar7 = pVVar5->y;
        v.y = (float)uVar7;
        v.x = (float)uVar6;
        position_00.y = translation.y + scale.y * VStack_4.y;
        position_00.x = translation.x + scale.x * VStack_4.x;
        position_00.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff8c,camera,position_00,(MethodInfo *)0x0);
        uVar8._0_4_ = pVVar5->x;
        uStack_9 = pVVar5->y;
        v.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        v_00.z = 0.0;
        uStack_9 = (undefined4)(uVar8 >> 0x20);
        v_00.x = (float)(undefined4)uVar8;
        v_00.y = (float)uStack_9;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_00,(MethodInfo *)0x0);
        VStack_4 = VVar3;
        VStack_2 = VVar1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DrawLineLoop3D(List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLineLoop3D
               (List_1_UnityEngine_Vector3_ *linePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (linePoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    if (1 < (linePoints->fields)._size) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
      index = 0;
      while (index < (linePoints->fields)._size) {
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)linePoints,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        index = index + 1;
        uVar2 = pVVar1->alias;
        uVar3 = pVVar1->path;
        pVVar4 = pVVar1->asset;
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (&VStack_5,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)linePoints,
                            index % (linePoints->fields)._size,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        method_00 = (MethodInfo *)pVVar1->alias;
        uVar6 = pVVar1->path;
        pVVar7 = pVVar1->asset;
        v.y = (float)uVar3;
        v.x = (float)uVar2;
        VStack_5.asset = (VisualTreeAsset *)&UNK_?;
        v.z = (float)pVVar4;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,method_00);
        v_00.y = (float)uVar6;
        v_00.x = (float)method_00;
        v_00.z = (float)pVVar7;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_00,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DrawLineLoop3D(List`1[UnityEngine.Vector3], Vector3) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLineLoop3D_1
               (List_1_UnityEngine_Vector3_ *linePoints,Vector3 pointOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (linePoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    if (1 < (linePoints->fields)._size) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
      index = 0;
      while (index < (linePoints->fields)._size) {
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (aVStack_2,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)linePoints,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        uStack_3._0_4_ = pVVar1->alias;
        uStack_3._4_4_ = pVVar1->path;
        pVStack_4 = pVVar1->asset;
        fVar5 = pointOffset.x + (float)(undefined4)uStack_3;
        fStack_6 = pointOffset.y + (float)uStack_3._4_4_;
        fStack_7 = pointOffset.z + (float)pVStack_4;
        index = index + 1;
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (&VStack_8,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)linePoints,
                            index % (linePoints->fields)._size,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        uStack_9._0_4_ = pVVar1->alias;
        uStack_9._4_4_ = pVVar1->path;
        pVStack_10 = pVVar1->asset;
        fVar11 = pointOffset.x + (float)(undefined4)uStack_9;
        fStack_12 = pointOffset.y + (float)uStack_9._4_4_;
        fStack_13 = pointOffset.z + (float)pVStack_10;
        v.y = fStack_6;
        v.x = fVar5;
        v.z = fStack_7;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        v_00.y = fStack_12;
        v_00.x = fVar11;
        v_00.z = fStack_13;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_00,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void DrawLinePairs3D(List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLinePairs3D
               (List_1_UnityEngine_Vector3_ *pairPoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (pairPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar1 = (pairPoints->fields)._size;
    if ((1 < (int)uVar1) && ((uVar1 & 1) == 0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
      for (index = 0; index < (pairPoints->fields)._size; index = index + 2) {
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pairPoints,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        uVar3 = pVVar2->alias;
        uVar4 = pVVar2->path;
        pVVar5 = pVVar2->asset;
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (&VStack_6,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pairPoints,
                            index + 1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        method_00 = (MethodInfo *)pVVar2->alias;
        uVar7 = pVVar2->path;
        pVVar8 = pVVar2->asset;
        v.y = (float)uVar4;
        v.x = (float)uVar3;
        VStack_6.asset = (VisualTreeAsset *)&UNK_?;
        v.z = (float)pVVar5;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,method_00);
        v_00.y = (float)uVar7;
        v_00.x = (float)method_00;
        v_00.z = (float)pVVar8;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_00,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DrawLineStrip3D(List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLineStrip3D
               (List_1_UnityEngine_Vector3_ *linePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (linePoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    if (1 < (linePoints->fields)._size) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
      index = 0;
      while (index < (linePoints->fields)._size + -1) {
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)linePoints,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex((Vector3)*pVVar1,(MethodInfo *)0x0);
        index = index + 1;
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)linePoints,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex((Vector3)*pVVar1,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DrawLines2D(List`1[UnityEngine.Vector2], Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLines2D
               (List_1_UnityEngine_Vector2_ *linePoints,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (linePoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    if (1 < (linePoints->fields)._size) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
      index = 0;
      while (index < (linePoints->fields)._size + -1) {
        VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (linePoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        VStack_2.y = VVar1.y;
        index = index + 1;
        VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (linePoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        VStack_4.y = VVar3.y;
        if (camera == (Camera *)0x0) goto code_?;
        position.y = VStack_2.y;
        position.x = VStack_2.x;
        position.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff98,camera,position,(MethodInfo *)0x0);
        uVar6 = pVVar5->x;
        uVar7 = pVVar5->y;
        v.y = (float)uVar7;
        v.x = (float)uVar6;
        position_00.y = VStack_4.y;
        position_00.x = VStack_4.x;
        position_00.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff8c,camera,position_00,(MethodInfo *)0x0);
        uVar8._0_4_ = pVVar5->x;
        uStack_9 = pVVar5->y;
        v.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        v_00.z = 0.0;
        uStack_9 = (undefined4)(uVar8 >> 0x20);
        v_00.x = (float)(undefined4)uVar8;
        v_00.y = (float)uStack_9;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_00,(MethodInfo *)0x0);
        VStack_4 = VVar3;
        VStack_2 = VVar1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DrawLines2D(List`1[UnityEngine.Vector2], Vector2, Vector2, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLines2D_1
               (List_1_UnityEngine_Vector2_ *linePoints,Vector2 translation,Vector2 scale,
               Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (linePoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    if (1 < (linePoints->fields)._size) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
      index = 0;
      while (index < (linePoints->fields)._size + -1) {
        VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (linePoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        VStack_2.y = VVar1.y;
        index = index + 1;
        VVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (linePoints,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        VStack_4.y = VVar3.y;
        if (camera == (Camera *)0x0) goto code_?;
        position.y = translation.y + scale.y * VStack_2.y;
        position.x = translation.x + scale.x * VStack_2.x;
        position.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff98,camera,position,(MethodInfo *)0x0);
        uVar6 = pVVar5->x;
        uVar7 = pVVar5->y;
        v.y = (float)uVar7;
        v.x = (float)uVar6;
        position_00.y = translation.y + scale.y * VStack_4.y;
        position_00.x = translation.x + scale.x * VStack_4.x;
        position_00.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff8c,camera,position_00,(MethodInfo *)0x0);
        uVar8._0_4_ = pVVar5->x;
        uStack_9 = pVVar5->y;
        v.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        v_00.z = 0.0;
        uStack_9 = (undefined4)(uVar8 >> 0x20);
        v_00.x = (float)(undefined4)uVar8;
        v_00.y = (float)uStack_9;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_00,(MethodInfo *)0x0);
        VStack_4 = VVar3;
        VStack_2 = VVar1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DrawLines3D(List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLines3D
               (List_1_UnityEngine_Vector3_ *linePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (linePoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    if (1 < (linePoints->fields)._size) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
      index = 0;
      while (index < (linePoints->fields)._size + -1) {
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xffffffe0,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)linePoints,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        index = index + 1;
        uVar2 = pVVar1->alias;
        uVar3 = pVVar1->path;
        pVVar4 = pVVar1->asset;
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (&VStack_5,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)linePoints,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        method_00 = (MethodInfo *)pVVar1->alias;
        uVar6 = pVVar1->path;
        pVVar7 = pVVar1->asset;
        v.y = (float)uVar3;
        v.x = (float)uVar2;
        VStack_5.asset = (VisualTreeAsset *)&UNK_?;
        v.z = (float)pVVar4;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,method_00);
        v_00.y = (float)uVar6;
        v_00.x = (float)method_00;
        v_00.z = (float)pVVar7;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_00,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DrawQuads2D(List`1[UnityEngine.Vector2], Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawQuads2D
               (List_1_UnityEngine_Vector2_ *quadPoints,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (quadPoints != (List_1_UnityEngine_Vector2_ *)0x0) {
    iVar1 = (quadPoints->fields)._size;
    if (0 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(7,(MethodInfo *)0x0);
      iVar1 = 2;
      do {
        uVar2 = (undefined4)in_stack_3;
        VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (quadPoints,iVar1 + -2,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        if (camera == (Camera *)0x0) goto code_?;
        position.y = VVar4.y;
        position.x = (float)uVar2;
        position.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff9c,camera,position,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar5,(MethodInfo *)0x0);
        VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (quadPoints,iVar1 + -1,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        fStack_6 = VVar4.y;
        position_00.y = fStack_6;
        position_00.x = (float)in_stack_7;
        position_00.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff90,camera,position_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar5,(MethodInfo *)0x0);
        VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (quadPoints,iVar1,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        position_01.y = VVar4.y;
        position_01.x = (float)in_stack_8;
        position_01.z = 0.0;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&puStack_9,camera,position_01,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar5,(MethodInfo *)0x0);
        in_stack_7 =
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_;
        in_stack_8 = quadPoints;
        VVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (quadPoints,iVar1 + 1,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        uVar10 = CONCAT44(VVar4.y,&UNK_?);
        in_stack_3 = CONCAT44(camera,(Vector3 *)&stack0xffffff78);
        position_02.z = 0.0;
        position_02.x = (float)&UNK_?;
        position_02.y = VVar4.y;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffff78,camera,position_02,(MethodInfo *)0x0);
        iVar11 = (int)uVar10;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar5,(MethodInfo *)0x0);
        iVar1 = iVar1 + 4;
      } while (1 < iVar11);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void DrawRect2D(Rect, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawRect2D
               (Rect rect,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                   );
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(7,(MethodInfo *)0x0);
  rect_00.m_YMin = rect.m_YMin;
  rect_00.m_XMin = rect.m_XMin;
  rect_00.m_Width = rect.m_Width;
  rect_00.m_Height = rect.m_Height;
  this = RectEx::RectEx_GetCornerPoints(rect_00,(MethodInfo *)0x0);
  if (this != (List_1_UnityEngine_Vector2_ *)0x0) {
    rect.m_YMin = (float)
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
    ;
    rect.m_XMin = 0.0;
    VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__get_Item
                      (this,0,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                      );
    fVar2 = rect.m_Width;
    rect.m_Width = VVar1.x;
    rect.m_Height = VVar1.y;
    fVar3 = rect.m_Height;
    if (camera != (Camera *)0x0) {
      rect.m_XMin = (float)camera;
      rect.m_YMin = fVar2;
      rect.m_Width = rect.m_Height;
      rect.m_Height = 0.0;
      position.y = fVar3;
      position.x = fVar2;
      position.z = 0.0;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                         ((Vector3 *)&rect.m_YMin,camera,position,(MethodInfo *)0x0);
      VVar1.x = pVVar4->x;
      VVar1.y = pVVar4->y;
      rect.m_YMin = 0.0;
      rect.m_XMin = (float)this;
      rect.m_Width = VVar1.x;
      rect.m_Height = VVar1.y;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__set_Item
                (this,0,VVar1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                );
      rect.m_Height = 1.4013e-45;
      rect.m_YMin = (float)&UNK_?;
      rect.m_Width = (float)this;
      VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar2 = rect.m_Height;
      rect.m_Width = VVar1.x;
      rect.m_Height = 0.0;
      position_00.y = fVar2;
      position_00.x = rect.m_Width;
      position_00.z = 0.0;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                         ((Vector3 *)&rect.m_YMin,camera,position_00,(MethodInfo *)0x0);
      value.x = pVVar4->x;
      value.y = pVVar4->y;
      rect.m_Width = value.x;
      rect.m_Height = value.y;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__set_Item
                (this,1,value,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                );
      VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar2 = rect.m_Height;
      rect.m_Width = VVar1.x;
      rect.m_Height = 0.0;
      position_01.y = fVar2;
      position_01.x = rect.m_Width;
      position_01.z = 0.0;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                         ((Vector3 *)&rect.m_YMin,camera,position_01,(MethodInfo *)0x0);
      value_00.x = pVVar4->x;
      value_00.y = pVVar4->y;
      rect.m_Width = value_00.x;
      rect.m_Height = value_00.y;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__set_Item
                (this,2,value_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                );
      VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar2 = rect.m_Height;
      rect.m_Width = VVar1.x;
      rect.m_Height = 0.0;
      position_02.y = fVar2;
      position_02.x = rect.m_Width;
      position_02.z = 0.0;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                         ((Vector3 *)&rect.m_YMin,camera,position_02,(MethodInfo *)0x0);
      value_01.x = pVVar4->x;
      value_01.y = pVVar4->y;
      rect.m_Width = value_01.x;
      rect.m_Height = value_01.y;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__set_Item
                (this,3,value_01,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                );
      VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar2 = rect.m_Height;
      rect.m_Width = VVar1.x;
      rect.m_Height = 0.0;
      v.y = fVar2;
      v.x = rect.m_Width;
      v.z = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
      VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar2 = rect.m_Height;
      rect.m_Width = VVar1.x;
      rect.m_Height = 0.0;
      v_00.y = fVar2;
      v_00.x = rect.m_Width;
      v_00.z = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_00,(MethodInfo *)0x0);
      VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar2 = rect.m_Height;
      rect.m_Width = VVar1.x;
      rect.m_Height = 0.0;
      v_01.y = fVar2;
      v_01.x = rect.m_Width;
      v_01.z = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_01,(MethodInfo *)0x0);
      VVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__get_Item
                        (this,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                        );
      fVar2 = rect.m_Height;
      rect.m_Width = VVar1.x;
      rect.m_Height = 0.0;
      v_02.y = fVar2;
      v_02.x = rect.m_Width;
      v_02.z = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_02,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DrawRectBorder2D(Rect, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawRectBorder2D
               (Rect rect,Camera *camera,MethodInfo *method)

{
  linePoints = RectEx::RectEx_GetCornerPoints(rect,(MethodInfo *)0x0);
  GLRenderer_DrawLineLoop2D(linePoints,camera,(MethodInfo *)0x0);
  return;
}


/* Void DrawSphereBorder(Camera, Vector3, Single, Int32) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawSphereBorder
               (Camera *camera,Vector3 sphereCenter,float sphereRadius,int32_t numPoints,
               MethodInfo *method)

{
  linePoints = PrimitiveFactory::PrimitiveFactory_GenerateSphereBorderPoints
                         (camera,sphereCenter,sphereRadius,numPoints,(MethodInfo *)0x0);
  GLRenderer_DrawLineLoop3D(linePoints,(MethodInfo *)0x0);
  return;
}


/* Void DrawTriangleFan2D(Vector2, List`1[UnityEngine.Vector2], Vector2, Vector2, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawTriangleFan2D
               (Vector2 origin,List_1_UnityEngine_Vector2_ *points,Vector2 translation,Vector2 scale
               ,Camera *camera,MethodInfo *method)

{
  this = points;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (points != (List_1_UnityEngine_Vector2_ *)0x0) {
    iVar1 = (points->fields)._size + -1;
    if (0 < iVar1) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(4,(MethodInfo *)0x0);
      if (camera == (Camera *)0x0) goto code_?;
      position_00.y = translation.y + origin.y * scale.y;
      position_00.x = translation.x + origin.x * scale.x;
      position_00.z = 0.0;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                         ((Vector3 *)&stack0xffffffc4,camera,position_00,(MethodInfo *)0x0);
      fVar3 = pVVar2->x;
      uVar4 = pVVar2->y;
      points = (List_1_UnityEngine_Vector2_ *)0x0;
      fVar5 = 0.0;
      do {
        v.y = (float)uVar4;
        v.x = fVar3;
        v.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this,(int32_t)points,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        fVar7 = translation.y + scale.y * VVar6.y;
        uVar4 = 0;
        pVVar2 = (Vector3 *)&stack0xffffffb8;
        position_01.y = fVar7;
        position_01.x = translation.x + scale.x * (float)in_stack_8;
        position_01.z = fVar5;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           (pVVar2,camera,position_01,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar9,(MethodInfo *)0x0);
        in_stack_8 = (undefined1 *)((int)&points->klass + 1);
        puVar10 = &UNK_?;
        VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this,(int32_t)in_stack_8,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        points = (List_1_UnityEngine_Vector2_ *)(translation.y + scale.y * VVar6.y);
        translation.y = 0.0;
        position.y = (float)points;
        position.x = translation.x + scale.x * (float)puVar10;
        position.z = (float)pVVar2;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffffac,camera,position,(MethodInfo *)0x0);
        scale.y = (float)&UNK_?;
        fVar3 = fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar9,(MethodInfo *)0x0);
        translation.x = (float)pVVar2;
        fVar5 = fVar7;
      } while ((int)points < iVar1);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DrawTriangleFan2D(Vector2, List`1[UnityEngine.Vector2], Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawTriangleFan2D_1
               (Vector2 origin,List_1_UnityEngine_Vector2_ *points,Camera *camera,MethodInfo *method
               )

{
  this = points;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (points != (List_1_UnityEngine_Vector2_ *)0x0) {
    iVar1 = (points->fields)._size + -1;
    if (0 < iVar1) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PushMatrix((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_LoadOrtho((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(4,(MethodInfo *)0x0);
      if (camera == (Camera *)0x0) goto code_?;
      position_00.z = 0.0;
      position_00._0_8_ = origin;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                         ((Vector3 *)&stack0xffffffc4,camera,position_00,(MethodInfo *)0x0);
      fVar3 = pVVar2->x;
      uVar4 = pVVar2->y;
      points = (List_1_UnityEngine_Vector2_ *)0x0;
      fVar5 = 0.0;
      do {
        v.y = (float)uVar4;
        v.x = fVar3;
        v.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this,(int32_t)points,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        fVar7 = VVar6.y;
        uVar4 = 0;
        pVVar2 = (Vector3 *)&stack0xffffffb8;
        position_01.y = fVar7;
        position_01.x = (float)in_stack_8;
        position_01.z = fVar5;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           (pVVar2,camera,position_01,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar9,(MethodInfo *)0x0);
        in_stack_8 = (undefined1 *)((int)&points->klass + 1);
        puVar10 = &UNK_?;
        VVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                List_1_UnityEngine_Vector2__get_Item
                          (this,(int32_t)in_stack_8,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                          );
        points = (List_1_UnityEngine_Vector2_ *)VVar6.y;
        position.y = (float)points;
        position.x = (float)puVar10;
        position.z = (float)pVVar2;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                           ((Vector3 *)&stack0xffffffac,camera,position,(MethodInfo *)0x0);
        fVar3 = fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(*pVVar2,(MethodInfo *)0x0);
        fVar5 = fVar7;
      } while ((int)points < iVar1);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_PopMatrix((MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DrawTriangleFan3D(Vector3, List`1[UnityEngine.Vector3], Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawTriangleFan3D
               (Vector3 origin,List_1_UnityEngine_Vector3_ *points,Vector3 translation,Vector3 scale
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    iVar1 = (points->fields)._size + -1;
    if (0 < iVar1) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(4,(MethodInfo *)0x0);
      fVar2 = translation.x + origin.x * scale.x;
      index = 0;
      do {
        v.y = translation.y + origin.y * scale.y;
        v.x = fVar2;
        v.z = translation.z + origin.z * scale.z;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xffffffb4,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        uVar4 = pVVar3->alias;
        uVar5 = pVVar3->path;
        VStack_6.asset = (VisualTreeAsset *)&UNK_?;
        v_00.y = translation.y + scale.y * (float)uVar5;
        v_00.x = translation.x + scale.x * (float)uVar4;
        v_00.z = translation.z + scale.z * (float)pVVar3->asset;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_00,(MethodInfo *)0x0);
        index = index + 1;
        VStack_6.asset = (VisualTreeAsset *)&UNK_?;
        pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (&VStack_6,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        uVar7 = pVVar3->alias;
        uVar8 = pVVar3->path;
        v_01.y = translation.y + scale.y * (float)uVar8;
        v_01.x = translation.x + scale.x * (float)uVar7;
        v_01.z = translation.z + scale.z * (float)pVVar3->asset;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v_01,(MethodInfo *)0x0);
      } while (index < iVar1);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DrawTriangleFan3D(Vector3, List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawTriangleFan3D_1
               (Vector3 origin,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (points != (List_1_UnityEngine_Vector3_ *)0x0) {
    iVar1 = (points->fields)._size + -1;
    if (0 < iVar1) {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(4,(MethodInfo *)0x0);
      index = 0;
      do {
        v.z = origin.z;
        v.x = origin.x;
        v.y = origin.y;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex(v,(MethodInfo *)0x0);
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xfffffff0,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        VStack_3.asset = (VisualTreeAsset *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex((Vector3)*pVVar2,(MethodInfo *)0x0);
        index = index + 1;
        VStack_3.asset = (VisualTreeAsset *)&UNK_?;
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (&VStack_3,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,
                            index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        origin.z = (float)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex((Vector3)*pVVar2,(MethodInfo *)0x0);
      } while (index < iVar1);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

