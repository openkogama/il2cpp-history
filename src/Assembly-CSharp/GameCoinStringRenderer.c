
/* Void AddString(Vector3, Vector3, Color) */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer_AddString
               (GameCoinStringRenderer *this,Vector3 start,Vector3 end,Color color,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Enqueue_GameCoinStringRenderer__PriceTagString_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).strings;
  if (this_00 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
    fStack_1 = end.x;
    fStack_2 = end.y;
    item.end.x = fStack_1;
    item.start = start;
    item.end.y = fStack_2;
    item.end.z = end.z;
    item.color.r = color.r;
    item.color.g = color.g;
    item.color.b = color.b;
    item.color.a = color.a;
    mscorlib.dll::System::Collections::Generic::Queue`1[GameCoinStringRenderer+PriceTagString]::
    Queue_1_GameCoinStringRenderer_PriceTagString__Enqueue
              (this_00,item,
               MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Enqueue_GameCoinStringRenderer__PriceTagString_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DrawString(GameCoinStringRenderer+PriceTagString) */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer_DrawString
               (GameCoinStringRenderer *this,GameCoinStringRenderer_PriceTagString s,
               MethodInfo *method)

{
  *unaff_FS_OFFSET = (float)&stack0xfffffff0;
  this_00 = (this->fields).stringMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(this_00,0,(MethodInfo *)0x0)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Begin(1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Color(s.color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
              (s.start.x,s.start.y,s.start.z,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
              (s.end.x,s.end.y,s.end.z,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_End((MethodInfo *)0x0);
    *unaff_FS_OFFSET = s.start.x;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer_OnPostRender
               (GameCoinStringRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).strings;
  while (pQVar1 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
    if ((pQVar1->fields)._size < 1) {
      return;
    }
    pQVar1 = (this->fields).strings;
    if (pQVar1 == (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) break;
    pGVar2 = mscorlib.dll::System::Collections::Generic::
              Queue`1[GameCoinStringRenderer+PriceTagString]::
              Queue_1_GameCoinStringRenderer_PriceTagString__Dequeue
                        ((GameCoinStringRenderer_PriceTagString *)&stack0xffffffd4,pQVar1,
                         MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Dequeue__
                        );
    uVar3 = (pGVar2->color).a;
    uVar4 = (pGVar2->start).x;
    uVar5 = (pGVar2->start).y;
    uVar6 = (pGVar2->start).z;
    s.start.z = (float)uVar6;
    s.start.y = (float)uVar5;
    s.start.x = (float)uVar4;
    uVar7 = (pGVar2->end).x;
    uVar8 = (pGVar2->end).y;
    uVar9 = (pGVar2->end).z;
    s.end.z = (float)uVar9;
    s.end.y = (float)uVar8;
    s.end.x = (float)uVar7;
    uVar10 = (pGVar2->color).r;
    uVar11 = (pGVar2->color).g;
    uVar12 = (pGVar2->color).b;
    s.color.b = (float)uVar12;
    s.color.g = (float)uVar11;
    s.color.r = (float)uVar10;
    s.color.a = (float)uVar3;
    GameCoinStringRenderer_DrawString(this,s,(MethodInfo *)0x0);
    pQVar1 = (this->fields).strings;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer_Start
               (GameCoinStringRenderer *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  return;
}


/* GameCoinStringRenderer() */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer__ctor
               (GameCoinStringRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Queue__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_GameCoinStringRenderer_PriceTagString_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>
                           );
  if (this_00 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Queue__
              );
    (this->fields).strings = this_00;
    func_?(&(this->fields).strings,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

