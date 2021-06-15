
/* Void AddString(Vector3, Vector3, Color) */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer_AddString
               (GameCoinStringRenderer *this,Vector3 start,Vector3 end,Color color,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    System.dll::System::Collections::Generic::Queue`1[GameCoinStringRenderer+PriceTagString]::
    Queue_1_GameCoinStringRenderer_PriceTagString__Enqueue
              (this_00,item,
               MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Enqueue_GameCoinStringRenderer__PriceTagString_
              );
    return;
  }
  func_?(0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).strings;
  while (pQVar1 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
    pIVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar1,
                        MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__get_Count__
                       );
    if ((int)pIVar2 < 1) {
      return;
    }
    pQVar1 = (this->fields).strings;
    if (pQVar1 == (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) break;
    pGVar3 = System.dll::System::Collections::Generic::
             Queue`1[GameCoinStringRenderer+PriceTagString]::
             Queue_1_GameCoinStringRenderer_PriceTagString__Dequeue
                       ((GameCoinStringRenderer_PriceTagString *)&stack0xffffffd4,pQVar1,
                        MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Dequeue__
                       );
    GameCoinStringRenderer_DrawString(this,*pGVar3,(MethodInfo *)0x0);
    pQVar1 = (this->fields).strings;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_GameCoinStringRenderer_PriceTagString_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>
                           );
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Queue__
            );
  (this->fields).strings = this_00;
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

