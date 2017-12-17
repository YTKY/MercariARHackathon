template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; 
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>();
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; template <> void RegisterClass<PhysicsMaterial2D>();
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 87 non stripped classes
	//0. ParticleSystem
	RegisterClass<ParticleSystem>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Behaviour
	RegisterClass<Behaviour>();
	//4. Camera
	RegisterClass<Camera>();
	//5. GameObject
	RegisterClass<GameObject>();
	//6. RenderSettings
	RegisterClass<RenderSettings>();
	//7. LevelGameManager
	RegisterClass<LevelGameManager>();
	//8. GameManager
	RegisterClass<GameManager>();
	//9. MeshFilter
	RegisterClass<MeshFilter>();
	//10. Renderer
	RegisterClass<Renderer>();
	//11. LightProbes
	RegisterClass<LightProbes>();
	//12. NamedObject
	RegisterClass<NamedObject>();
	//13. LightmapSettings
	RegisterClass<LightmapSettings>();
	//14. GUIElement
	RegisterClass<GUIElement>();
	//15. GUILayer
	RegisterClass<GUILayer>();
	//16. Light
	RegisterClass<Light>();
	//17. Mesh
	RegisterClass<Mesh>();
	//18. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//19. Shader
	RegisterClass<Shader>();
	//20. Material
	RegisterClass<Material>();
	//21. Sprite
	RegisterClass<Sprite>();
	//22. Texture
	RegisterClass<Texture>();
	//23. Texture2D
	RegisterClass<Texture2D>();
	//24. RenderTexture
	RegisterClass<RenderTexture>();
	//25. Transform
	RegisterClass<Transform>();
	//26. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//27. Rigidbody
	RegisterClass<Rigidbody>();
	//28. Collider
	RegisterClass<Collider>();
	//29. CharacterController
	RegisterClass<CharacterController>();
	//30. Animation
	RegisterClass<Animation>();
	//31. Animator
	RegisterClass<Animator>();
	//32. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//33. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>();
	//34. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//35. UI::Canvas
	RegisterClass<UI::Canvas>();
	//36. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//37. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//38. AudioClip
	RegisterClass<AudioClip>();
	//39. SampleClip
	RegisterClass<SampleClip>();
	//40. AudioListener
	RegisterClass<AudioListener>();
	//41. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//42. AudioSource
	RegisterClass<AudioSource>();
	//43. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//44. AnimationClip
	RegisterClass<AnimationClip>();
	//45. Motion
	RegisterClass<Motion>();
	//46. MeshCollider
	RegisterClass<MeshCollider>();
	//47. Collider2D
	RegisterClass<Collider2D>();
	//48. MeshRenderer
	RegisterClass<MeshRenderer>();
	//49. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//50. PreloadData
	RegisterClass<PreloadData>();
	//51. Cubemap
	RegisterClass<Cubemap>();
	//52. Texture3D
	RegisterClass<Texture3D>();
	//53. Texture2DArray
	RegisterClass<Texture2DArray>();
	//54. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//55. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//56. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//57. InputManager
	RegisterClass<InputManager>();
	//58. PlayerSettings
	RegisterClass<PlayerSettings>();
	//59. ResourceManager
	RegisterClass<ResourceManager>();
	//60. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//61. TimeManager
	RegisterClass<TimeManager>();
	//62. TagManager
	RegisterClass<TagManager>();
	//63. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//64. QualitySettings
	RegisterClass<QualitySettings>();
	//65. BuildSettings
	RegisterClass<BuildSettings>();
	//66. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//67. NetworkManager
	RegisterClass<NetworkManager>();
	//68. ScriptMapper
	RegisterClass<ScriptMapper>();
	//69. PhysicsManager
	RegisterClass<PhysicsManager>();
	//70. MonoScript
	RegisterClass<MonoScript>();
	//71. TextAsset
	RegisterClass<TextAsset>();
	//72. MonoManager
	RegisterClass<MonoManager>();
	//73. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//74. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//75. AudioManager
	RegisterClass<AudioManager>();
	//76. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//77. BoxCollider
	RegisterClass<BoxCollider>();
	//78. FlareLayer
	RegisterClass<FlareLayer>();
	//79. SphereCollider
	RegisterClass<SphereCollider>();
	//80. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//81. AnimatorController
	RegisterClass<AnimatorController>();
	//82. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//83. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//84. Avatar
	RegisterClass<Avatar>();
	//85. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//86. PhysicsMaterial2D
	RegisterClass<PhysicsMaterial2D>();

}
